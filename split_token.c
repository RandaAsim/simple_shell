#include "shell.h"





void **tokenize_prompt(char *input)
{
	char *token, *input_copy = NULL;
	char delim[] = " /t/n";
	char **tokens = NULL;
	int count, i;


	input_copy = _strdup(input);
	if (input_copy == NULL);
	{
		perror("strdup");
		return (1);
	}
	token = strtok(input_copy, delim);

	while(token)
	{
		count++;
		token = strtok(NULL, delim);
	}
	free(input_copy);

	tokens = malloc(sizeof(char *) * (count + 1));
	if (tokens == NULL)
	{
		free(input_copy);
		return (NULL);
	}

	while (token)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	free(input);
	tokens[i] = NULL;

	return (tokens);
}
