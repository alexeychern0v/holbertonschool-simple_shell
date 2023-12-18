#include "shell.h"
/**
 * main - infinitely displays prompt and executes commands
 *
 * Return: zero on success
 */
int main(void)
{
	char command[120];

	while (true)
	{
		if (isatty(fileno(stdin)))
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
