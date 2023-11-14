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

	while (1)
	{
		input = get_line();
		if (input == NULL)
		{
			if (isatty(0))
				write(1, "\n", 1);
			return (0);
		}
		free(input);

		command = tokenize_prompt(input);
		if (command != NULL)
			free(command);
	}
}
