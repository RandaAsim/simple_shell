#include "shell.h"
/**
 * _getpath - function to get the path for the command
 * @user_command: the command entered
 * Return: the path
 */
char *_getpath(char *user_command)
{
	char *storage_path = getenv("PATH");
	char *token, *dupl;
	char buff[256];
	char *path = NULL;

	if (strchr(user_command, '/') != NULL)
	{
		path = strdup(user_command);
		return (path);
	}
	if (storage_path == NULL)
		return (NULL);

	dupl = strdup(storage_path);
	token = strtok(dupl, ":");

	while (token)
	{
		strcpy(buff, token);
		strcat(buff, "/");
		strcat(buff, user_command);
		if (access(buff, X_OK) == 0)
		{
			path = strdup(buff);
			free(dupl);
			return (path);
		}

		token = strtok(NULL, ":");
	}
	free(token);
	free(dupl);
	return (NULL);
}
