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
	char stat;
	char **tokens = NULL;
	(void) argc;

	while (1)
	{
		input = get_line();
		if (input == NULL)
		{
			if (isatty(0))
				write(1, "\n", 1);
			return (stat);
		}

		tokens = tokenize_prompt(input);
		if (!tokens)
			continue;

		stat = _process(tokens, argv);
	}
}
