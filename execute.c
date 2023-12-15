#include "shell.h"
/**
 * execute - executes users command
 * @command: users command
 */
void execute(const char *command)
{
	char *args[128];
	int arg_count = 0;
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *token = strtok((

		char *args[] = {command, NULL};

		execve(command_path, args, NULL);

		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
		wait(NULL);
}
