#include "shell.h"

/**
 *exec_command - creates a function that will execute a prompt.
 *@input_command: prompt to execute
 */

void exec_command(const char *input_command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)

	{
		j_print("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(input_command, input_command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
