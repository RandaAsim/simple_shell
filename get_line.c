#include "shell.h"

/**
 * get_line - read line from user
 *
 * Return: Always 0 (success)
 */

char *get_line(void)
{
	char *input = NULL;
	size_t n = 0;
	ssize_t n_read;

	if (isatty(0))
		write(1, "$ ", 2);

	n_read = getline(&input, &n, stdin);
	if (n_read == -1)
	{
		free(input);
		return (NULL);
	}

	return (input);
}
