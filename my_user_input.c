#include "shell.h"

/**
 *read_command - a function that recieves user inputs.
 *@function - recieves input.
 *@size - determine the size for the letters.
 */

void read_command(char command, size_t size)
{

	if (fgets)
		(command, size, stdin) == NULL


	if (feof(stdin))

	{
		joshcolia_print("\n");

		exit(EXIT_SUCCESS);
	}

	else
	{
		joshcolia_print("Error while reading input.\n");

		exit(EXIT_FAILURE);
	}
}
