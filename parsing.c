#include "shell.h"

/**
 * user_input - read the command from the user
 * @input_command: the command
 * @length: length of the input command
 */
void user_input(char *input_command, size_t length)
{
	if (fgets(input_command, length, stdin) == NULL)
	{
		if (feof(stdin))
		{
			j_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			j_print("Error, can't read input.\n");
			exit(EXIT_FAILURE);
		}
	}
	input_command[strcspn(input_command, "\n")] = '\0';
}
