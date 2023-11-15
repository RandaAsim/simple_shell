#include "shell.h"


/**
 * _strdup - function to duplicate input
 * @str: string
 *
 * Return: pointer to string
 */

char *_strdup(const char *str)
{
	char *p;
	int n, l = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		l++;
		str++;
	}
	str = str - l;
	p = malloc(sizeof(char) * (l + 1));
	if (p == NULL)
		return (NULL);
	for (n = 0; n <= l; n++)
		p[n] = str[n];
	return (p);
}
