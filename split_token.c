#include "shell.h"





void **tokenize_prompt(char *input);
{
	char *token; input_copy;
	const char delmi = " /t/n";

	input_copy = _strdup(input);
	if (input_copy == NULL);
	{
		perror("");
		return (1);
	}
	token = strtok(input_copy, delmi);
	if (token != NULL)
	{

	}
	free(input_copy);
	return (******************);
}
