#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_INPUT_SIZE 1024

void interactive_mode();
char *read_line();
char **parse_line(char *line);
int execute_command(char **args);

int main(void)
{
    interactive_mode();

    return EXIT_SUCCESS;
}

void interactive_mode()
{
    char *line;
    char **args;
    int status;

    do
    {
        printf("($) ");
        line = read_line();
        args = parse_line(line);
        status = execute_command(args);

        free(line);
        free(args);
    } while (status);
}

char *read_line()
{
    char *line = NULL;
    size_t bufsize = 0;
    getline(&line, &bufsize, stdin);
    return line;
}

char **parse_line(char *line)
{
    const char delimiter[] = " \t\n";
    char *token;
    int bufsize = MAX_INPUT_SIZE;
    int position = 0;

    char **tokens = malloc(bufsize * sizeof(char *));
    if (!tokens)
    {
        fprintf(stderr, "Allocation error\n");
        exit(EXIT_FAILURE);
    }

    token = strtok(line, delimiter);
    while (token != NULL)
    {
        tokens[position] = token;
        position++;

        if (position >= bufsize)
        {
            bufsize += MAX_INPUT_SIZE;
            tokens = realloc(tokens, bufsize * sizeof(char *));
            if (!tokens)
            {
                fprintf(stderr, "Allocation error\n");
                exit(EXIT_FAILURE);
            }
        }

        token = strtok(NULL, delimiter);
    }
    tokens[position] = NULL;
    return tokens;
}

int execute_command(char **args)
{
    pid_t pid, wpid;
    int status;

    pid = fork();
    if (pid == 0)
    {
        // Child process
        if (execvp(args[0], args) == -1)
        {
            perror("shell");
        }
        exit(EXIT_FAILURE);
    }
    else if (pid < 0)
    {
        // Error forking
        perror("shell");
    }
    else
    {
        // Parent process
        do
        {
            wpid = waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }

    return 1; // Continue running the shell
}
