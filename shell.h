#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char environ; /*declilation of environment*/

char *get_line(void);
char **tokenize_prompt(char *input);
int execute_command(char *command);
int process(char **tokens, char **argv)

#endif /* SHELL_H */
