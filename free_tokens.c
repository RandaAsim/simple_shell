#include "shell.h"

/**
 * _free - free all allocate memory
 * @array: strings of the command line
 *
 * Return: None.
 */

void _free(char **array)
{
	int j;

	if (!array)
		return;

	for (j = 0; array[j]; j++)
	{
		free(array[j]);
		array[j] = NULL;
	}
	free(array), array = NULL;
}
