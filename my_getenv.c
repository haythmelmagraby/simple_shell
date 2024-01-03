#include "main.h"
/**
*my_getenv - get environ value of specific key
*@key: the given key or token to enviroment value needed
*
*Return: the value of key in enviroment
**/

char *my_getenv(const char *key)
{
	int i = 0;
	char *token;
	char *delim = "=";

	while (environ[i])
	{
		char *copy = copy_string(environ[i]);
		token = strtok(copy, delim);
		if (my_strcmp(token, key) == 0)
		{
		/* REMEMBER STRTOK KNOW IT'S POSITION FROM STATIC VARIABLE*/
			char *val = strtok(NULL, delim);
			return val;
		}
		free(copy);
		i++;
	}
	exit(1);
}
