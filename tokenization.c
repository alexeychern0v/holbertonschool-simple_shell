#include "shell.h"

int main()
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
	return 0;
}
