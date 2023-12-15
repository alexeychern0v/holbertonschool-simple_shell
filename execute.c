#include "shell.h"
/**
 * execute_command - executes users command
 * @command: users command
 */
void execute_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char command_path[256];

		snprintf(command_path, sizeof(command_path), "/bin/%s", command);

		char *args[] = {command, NULL};
		execve(command_path, args, NULL);

		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
		wait(NULL);
}
