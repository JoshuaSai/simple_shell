#include "shell.h"

/**
 *execute_command - creates a function that will execute a prompt.
 *@command - prompt to execute
 */

void execute_command(const char *command)
{
	pid_t child_pid = fork()

	if (child_pid == -1)

	{
		joshcolia_print("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(command, command, (char *NULL));
		perror("execlp);
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
