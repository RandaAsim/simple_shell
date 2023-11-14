#include "shell.h"

int _process(char **tokens, char **argv)
{
	pid_t pid = fork();
	int status;

	if (pid == 0)
	{
		if(execve(tokens[0], tokens, environ))
		{
			perror(argv[0]);
			exit(EXIT_FAILURE);
			free(tokens);
		}
		free(tokens);
	}
	else
	{
		waitpid(pid, &status, 0);
		free(tokens);
	}
	return (WEXITSTATUS(status));
}
