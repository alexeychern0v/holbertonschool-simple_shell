#include "shell.h"
/**
 * main - infinitely displays prompt and executes commands
 * Return: zero
 */
int main(void)
{
	char command[128];

	while (1)
	{
		display_prompt();
		user_input(command, sizeof(command));
		execute_command(command);
	}
	return (0);
}
