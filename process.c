#include "shell.h"

/**
 * _process - execute the command
 * @tokens: command entered by user
 * @argv: argument value
 * Return: exit status
 */

int _process(char **tokens, char **argv)
{
	pid_t pid = fork();
	int stat;

	if (pid == 0)
	{
		if (execve(tokens[0], tokens, environ) == -1)
		{
			perror(argv[0]);
			_free(tokens);
			exit(0);
		}
	}
	else
	{
		waitpid(pid, &stat, 0);
		_free(tokens);
	}
	return (WEXITSTATUS(stat));
}
