#include "main.h"

/**
*split_string - split array of strings to array of pointers of token strings
*@src: the source string array
*@delim: the delimeter which will be the split point
*
*Return: array of pointers to splited strings
**/

char **split_string(char *src, char *delim)
{
	int index = 0, i = 0;
	char *str = copy_string(src);
	char *str2 = copy_string(src);
	char *token = strtok(str, delim);
	char **arr;

	while (token != NULL)
	{
		token = strtok(NULL, delim);
		index++;
	}

	arr = malloc(sizeof(char *) * (index + 1));
	if (arr == NULL)
	{
		my_print("faild to allocate memory\n");
		free(str);
		free(str2);
		exit(1);
	}

	free(str);
	token = strtok(str2, delim);
	while (token != NULL)
	{
		arr[i] = copy_string(token);
		token = strtok(NULL, delim);
		i++;
	}
	arr[i] = NULL;

	free(str2);
	return (arr);
}

/**
*free_string_splited - free allocated memory of splited string
*@arr : the array of strings
*
**/

void free_string_splited(char **arr)
{
	int i = 0;

	if (arr == NULL)
		return;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
}
