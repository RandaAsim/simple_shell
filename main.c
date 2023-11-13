#include "shell.h"

/**
 * main - simple shell function
 * @argc: count argument
 * @argv: value argument
 * Return: always 0 (success)
*/

int main(int argc, char **argv)
{
	char *input = NULL;
	(void) argc;
	(void) argv;

	while(1)
	{
		write(1, "$ ", 2);
		input = get_line();
		if (input == NULL)
			return (0);
	}
}
