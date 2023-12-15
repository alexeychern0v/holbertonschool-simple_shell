#include "shell.h"
/**
 * shell - infinitely displays prompt and executes commands
 * Return: zero
 */
int main(void)
{
	char command[120];
	
	while (true)
	{
		prompt();
		user_input(command, sizeof(command));
		execute(command);
	}
	return 0;
}
