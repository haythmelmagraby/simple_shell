#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern  char **environ;

void my_print(const char *src);

int my_strcmp(const char *s1, const char *s2);

char *my_strcat(char *dest, char *src);

char *my_getenv(const char *key);

char **split_string(char *src, char *delim);

char *copy_string(const char *src);

void execute(char *path, char **args);

void check_path(char **args);

void print_env(void);

#endif
