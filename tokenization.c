#include "shell.h"
/**
 * tokenization - function that breaks a string into small components
 * Return: zero
 */
int tokenization(void)
{
	char command[] = "I am Shell";

	char *token;
	char *delim = " ";

	token = strtok(command, delim);

	while (token != NULL)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
