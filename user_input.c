#include "shell.h"
/**
 * user_input - Read a string from command line
 *
 * @size: length of string
 *
 * @command: string to check
 */
void user_input(char *command, size_t size)
{
	if (isatty(STDIN_FILENO))
	{
		prompt();
	}

	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			if (isatty(STDIN_FILENO))
			{
				printf("\n");
			}
			exit(EXIT_SUCCESS);
		}
		else
		{
			printf("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}

	command[strcspn(command, "\n")] = '\0';
}

