# C - Simple Shell

## Introduction

Simple Shell is our final project of the first trimester in Holberton. With all skills developped during our studies, we recreated a Simple Shell using C. This shell program allows users to interact with a basic command-line interface, execute commands, and perform various tasks all like in basic Shell.

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

- Compile the Shell using the compilation command from above.

- Run the executable.
```
./hsh
```
- Inter commands as you would in a regular shell.

![App Screenshot](https://cdn.discordapp.com/attachments/1183742075821379636/1185243888244498452/image.png?ex=658ee763&is=657c7263&hm=af9f5eb9f37e62cfb8e6b852c1e2e5086d6618e6f357713e55d76c7f778c3f36&)

## Exit the Shell

To exit the shell and return to the regular command prompt, enter:

```
exit
```
The shell will display a farewell message and close.

## Flowchart

![image](https://github.com/alexeychern0v/holbertonschool-simple_shell/assets/97944947/91d04df0-023f-4c5b-acc1-79c5e0bc1505)

## File Descriptions
- **shell.c:** Main logic for the shell, including the main function.
- **execute.c:** Tokenize user's input and run necessary commands.
- **prompt.c:** Function to display prompt
- **user_input.c:** Function to read user input.
- **shell.h:** Header file
- **README.md:** Description of the project.

## AUTHORS

- [@Alexey Chernov](https://github.com/alexeychern0v)
- [@Ines Oubabas](https://github.com/Ines-Oubabas)
