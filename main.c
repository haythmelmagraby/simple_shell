#include "main.h"
/**
* main - the start for the simple shell program
*
* Return: 0
**/

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char *delim = " \n";
	char **ptr_arr;

	my_print("#cisfun$");

	while ((read = getline(&line, &len, stdin)) != -1)
	{
		ptr_arr = split_string(line, delim);
		execute(ptr_arr);
		my_print("#cisfun$");
	}

	free(line);
	my_print("\n");

	return (0);
}
