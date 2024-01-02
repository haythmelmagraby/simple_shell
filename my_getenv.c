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
		token = strtok(environ[i], delim);
		if (my_strcmp(token, key) == 0)
		{
		/* REMEMBER STRTOK KNOW IT'S POSITION FROM STATIC VARIABLE*/
			return (strtok(NULL, delim));
		}
		i++;
	}


	exit(0);
}
