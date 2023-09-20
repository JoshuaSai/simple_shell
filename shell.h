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

/**
 * File - shell.h
 * Authors - Joshua and Jecolia
 * Description -  containing all the functions prototypes used in the simple shell project.
 */

void display_prompt(void);
void j_print(const char *print format);
void read_command(char *command, size_t size);
void execute_command(const char *command);

#endif
