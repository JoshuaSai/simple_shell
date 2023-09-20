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
/**
 * File - shell.h
 * Authors - Joshua and Jecolia
 * Description - containing all the functions prototypes for the simple shell project.
 */

void show_prompt(void);
void j_print(const char *format);
void run_commands(const char *input_command);
void exec_command(const char *input_command);
void user_input(char *input_command, size_t length);
#endif
