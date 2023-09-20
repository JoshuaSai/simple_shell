#include "shell.h"
/**
 * main - that is the main function
 *
 */

int main(void)

{
	char input_command[130];

	while (1)
	{
		show_prompt();
		get_commands (input_command, sizeof(input_command));
		run_commands(input_command);
	}
return 0;
}
