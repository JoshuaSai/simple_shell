#include "shell.h"

/**
 * joshcolia_print - print format to the standard output
 * @format: input string
 *
 */


void joshcolia_print(const char *format)
{
	write(STDOUT_FILENO, format, strlen(format));
}
