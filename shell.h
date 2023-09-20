#ifndef SHELL_H
#define SHELL_H

/**
 * File - shell.h
 *Author - Joshua and Jecolia
 *Description - contains all the header files used in the simple shell project
 */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <signal.h>

#define J_PRINT(a) (write(STDOUT_FILENO, a, _strlen(a)))
#define PROMPT "$ "
#define SUCCESS (1)
#define FAIL (-1)
#define NEUTRAL (0)
#define BUFSIZE 1024
#define TOKEN_BUFSIZE 128
#define TOKEN_DELIM " \t\r\n\a"

extern char **ground;


/**
 * struct data - struct that contains data on runtime
 * @av: argument vector
 * @command: command written by the user
 * @args: tokens of the command
 * @statut: latest status of the shell
 * @length: lines counter
 * @_environ: local variable
 * @pid: process id of the shell
 */
typedef struct data
{
	char **av;
	char *command;
	char **args;
	int statut;
	int length;
	char **_environ;
	char *pid;
} data_shell;

/**
 * struct sep_list_s - single linked list
 * @sep: ; | &
 * @next: next node
 * Description: single linked list to store separators
 */
typedef struct sep_list_s
{
	char sep;
	struct sep_list_s *next;
} sep_list;

/**
 * struct line_list_s - single linked list
 * @line: command line
 * @next: next node
 * Description: single linked list to store command lines
 */
typedef struct line_list
{
	char *line;
	struct line_list *next;
} line_list;

/**
 * struct variable_list -single linked list
 * @len_var: length of the variable
 * @value: value of the variable
 * @len_value: length of the value
 * @next: next node
 * Description: single linked list
 */
typedef struct variable_list
{
	int len_var;
	char *value;
	int len_value;
	struct variable_list *next;
} variable;

/**
 * struct builtin_s - Builtin struct for command args.
 * @name: The name of the command builtin i.e cd, exit, env
 * @f: data type pointer function.
 */
typedef struct builtin_s
{
	char *name;
	int (*f)(data_shell *datash);
} builtin_t;

<<<<<<< HEAD
void display_prompt(void);
void joshcolia_print(const char *format);
void read_command(char *command, size_t size);
void execute_command(const char *command);
=======
>>>>>>> b11362c2e4208f66d546b59efa410b5899597f2f

char *_strcat(char *dest, const char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(
#endif
