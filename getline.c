#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *line;
	size_t en = 0;
	ssize_t read;

	printf("$ ");

	read = getline(&line, &en, stdin);
	printf("%s\n", line);

	free(line);
	exit(EXIT_SUCCESS);
}
