#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <wait.h>

void execute_command(const char *command);
void display_prompt(void);
int tokenization(void);
void user_input(char *command, size_t size);

#endif
