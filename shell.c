#include "shell.h"
/**
 * main - contains the entry point or main function
 *
 */

int main(void)

{
	char command[130];

	while (1)
	{
		display_prompt();
		read_command (command, sizeof(command));
		execute_command(command);
	}
return 0;
}
