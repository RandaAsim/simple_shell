#include "shell.h"

int process(char **tokens, char **argv)
{
	pid_t pid = fork();
	int status;
	if (pid == 0)
	{
		if(execve(tokens[0], token, environ))
	}
}
