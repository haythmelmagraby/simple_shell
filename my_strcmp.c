#include "main.h"
/**
*my_strcmp - copare 2 strings
*@s1: string 1 to compare
*@s2: string 2 to compare
*
*Return: result of compare (0 if identical)
**/

int my_strcmp(const char *s1, const char *s2)
{
	int result, i = 0;

	while (s1[i])
	{
		result = ((int) s1[i] - 48) - ((int) s2[i] - 48);
		i++;
	}
	return (result);
}
