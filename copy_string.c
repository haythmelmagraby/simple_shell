#include "main.h"

/**
*copy_string - it's copy string and return the new copy
*to use with const string array
*@src: the source string array
*
*Return: the rewult of copy
**/

char *copy_string(const char *src)
{
	int i = 0, j = 0;
	char *copy;

	while (src[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
	{
		my_print("can't allocate copy in memory");
		exit(1);
	}

	while (j < i)
	{
		copy[j] = src[j];
		j++;
	}

	copy[j] = '\0';
	return (copy);
}
