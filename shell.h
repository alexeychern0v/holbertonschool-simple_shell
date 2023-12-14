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

/* for read/write buffers */
#define READ_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH - 1

/* for command chaining */
#define CMD_NORM    0
#define CMD_OR      1
#define CMD_AND     2
#define CMD_CHAIN   3

/* for convert_number () */
#define CONVERT_LOWERCASE    1
#define CONVERT_UNSIGNED     2

/* 1 if using system getline () */
#define USE_GETLINE  0
#define USE_STRTOK  0

#define HIST_FILE ".simple_shell_history"






/* string functions.c */
int _strlen(char *);
int _strcmp(char *, char *);
char *starts_with(const char *, const char *);
char *_strcat(char *, char *);

/*string functions2.c */
char *_strncpy(char *, char *, int);

