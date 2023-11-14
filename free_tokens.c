#include "shell.h"

void _free(char **array)
{
	int j;

	if(!array)
		return;

	for (j = 0; array[j]; j++)
	{
		free(array[j]);
		array[j] = NULL;
	}
	free(array), array = NULL;
}
