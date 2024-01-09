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
	char *val;

	while (environ[i])
	{
		char *copy = copy_string(environ[i]);

		token = strtok(copy, delim);
		if (my_strcmp(token, key) == 0)
		{
			token = strtok(NULL, delim);
			val = copy_string(token);
			return (val);
		}

		free(copy);
		i++;
	}
	exit(1);
}
