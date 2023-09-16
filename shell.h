#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * File - shell.h
 * Authors - Joshua and Jecolia
 * Description: A header file containing all the functions prototypes used in the simple shell project.
 */

void display_prompt(void);
void joshcolia_print(const char *print format);
void read_command(char *command, size_t size);
void execute_command(const char *command);

#endif
