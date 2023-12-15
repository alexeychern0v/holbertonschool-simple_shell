#include "shell.h"
/**
 * tokenization - function that breaks a string into small components
 * Return: zero
 */
int tokenization(void)
{
	char *args[256];
	int arg_count = 0;
	char *token;
	char *delim = " ";

	chat *token = strtok((char *)command, delim);

	while (token != NULL)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
