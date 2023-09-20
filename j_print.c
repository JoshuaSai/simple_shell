#include "shell.h"

/**
 * j_print - print format to the standard output
 * @format: input string
 *
 */


void j_print(const char *format)
{
	write(STDOUT_FILENO, format, strlen(format));
}
