#include "shell.h"
/**
 * shell_project - infinitely displays prompt and executes commands
 *
 * Return: zero on success
 */
int shell_project(void)
{
	char command[120];

	while (true)
	{
		prompt();
		user_input(command, sizeof(command));
		if (strcmp(command, "exit") == 0)
		{
			printf("Thank you from Ines and Alexey. See you soon!\n");
			break;
		}
		 execute(command);
	}
	return (0);
}
