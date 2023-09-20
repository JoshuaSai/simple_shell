#include "shell.h"
/**
 * main - that is the main function
 *
 * Return: always 0 success
 */

int main(void)

{
	char input_command[130];

	while (1)
	{
		show_prompt();
		user_input(input_command, sizeof(input_command));
		exec_command(input_command);
	}
return (0);
}
