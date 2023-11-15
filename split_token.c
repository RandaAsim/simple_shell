#include "shell.h"

/**
 * tokenize_prompt - split the command
 * @input: the command line from user
 *
 * Return: splited token and -1 on failure
 */

char **tokenize_prompt(char *input)
{
	char *token, *input_copy = NULL;
	char delim[] = " \t\n";
	char **tokens = NULL;
	int count = 0, i = 0;

	if (!input)
		return (NULL);
	input_copy = _strdup(input);
	if (input_copy == NULL)
		return (NULL);

	token = strtok(input_copy, delim);
	if (token == NULL)
	{
		free(input);
		free(input_copy);
		return (NULL);
	}
	while (token)
	{
		count++;
		token = strtok(NULL, delim);
	}
	free(input_copy);
	tokens = malloc(sizeof(char *) * (1 + count));
	if (!tokens)
	{
		free(input);
		return (NULL);
	}
	token = strtok(input, delim);
	while (token)
	{
		tokens[i] = _strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	free(input);
	tokens[i] = NULL;
	return (tokens);
}
