#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern char **environ;

void my_print(const char *src);

char **split_string(char *src, char *delim);

char *copy_string(const char *src);


void execute(char **args);




#endif
