#include "shell.h"
/**
 * user_input - Read a string command line
 *
 * @size: length of string
 *
 * @command: cHr to check
 */
void user_input(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			printf("\n");
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
