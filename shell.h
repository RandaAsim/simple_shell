#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ; /*declilation of environment*/

char *get_line(void);
char **tokenize_prompt(char *input);
int execute_command(char *command);
int _process(char **tokens, char **argv);

void _free(char **array);
char *_strdup(const char *str);
char *_getpath(char *user_command);

#endif /* SHELL_H */
