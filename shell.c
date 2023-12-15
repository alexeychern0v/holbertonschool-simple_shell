#include "shell.h"
/**
 * shell - infinitely displays prompt and executes commands
 * Return: zero
 */
int shell(void)
{
	char command[128];

	while (1)
	{
		prompt();
		user_input(command, sizeof(command));
		execute(command);
	}
	return (0);
}
