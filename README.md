# C - Simple Shell

## Introduction

Welcome to the Simple Shell! This shell program allows users to interact with a basic command-line interface, execute commands, and perform various tasks.

## Features

- Basic command execution.
- Input/output redirection.
- Simple job control (background and foreground execution).
- Support for common shell commands and built-ins.

## The shell compilation command

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

# How to Use

- Compile the Shell using the compilation command from below

- Run the executable
```
./hsh
```
- Inter commands as you would in a regular shell.

![App Screenshot](https://cdn.discordapp.com/attachments/1183742075821379636/1185243888244498452/image.png?ex=658ee763&is=657c7263&hm=af9f5eb9f37e62cfb8e6b852c1e2e5086d6618e6f357713e55d76c7f778c3f36&)

## Exiting the Shell

To exit the shell and return to the regular command prompt, enter:

```
exit
```
The shell will display a farewell message and close.

### List of allowed functions and system calls+

- all functions from string.h
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- printf (man 3 printf)
- fprintf (man 3 fprintf)
- vfprintf (man 3 vfprintf)
- sprintf (man 3 sprintf)
- putchar (man 3 putchar)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## AUTHORS

- [@Alexey Chernov](https://github.com/alexeychern0v)
- [@Ines Oubabas](https://github.com/alexeychern0v)
