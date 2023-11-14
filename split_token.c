#include "shell.h"

char **tokenize_prompt(char *input)
{
	char *token, *input_copy = NULL;
	char delim[] = " \t\n";
	char **tokens = NULL;
	int count = 0, i = 0;
	int j;

	if (!input)
		return (NULL);
	input_copy = _strdup(input);
	if (input_copy == NULL)
	{
		return (NULL);
	}

	token = strtok(input_copy, delim);
	if (token == NULL)
	{
		free(input_copy);
		return (NULL);
	}

	while(token)
	{
		count++;
		token = strtok(NULL, delim);
	}
	free(input_copy);

	tokens = malloc(sizeof(char *) * (count + 1));
	if (!tokens)
	{
		return (NULL);
	}

	input_copy = _strdup(input);
	if (input_copy == NULL)
	{
		free(tokens);
		return (NULL);
	}
	token = strtok(input, delim);

	while (token)
	{
		tokens[i] = _strdup(token);
		if (tokens[i] == NULL)
		{
			for (j = 0; j < 1; j++)
			{
				free(tokens[j]);
			}
			free(tokens);
			free(input_copy);
			return NULL;
		}
		token = strtok(NULL, delim);
		i++;
	}
	free(input);
	tokens[i] = NULL;

	return (tokens);
}
