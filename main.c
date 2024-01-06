#include "main.h"
/**
* main - the start for the simple shell program
*@ac: the command argument number
*@av: the array of pointer of command args
* Return: 0
**/

int main(int ac, char **av)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char *delim = " \n";
	char **ptr_arr;

	if (ac > 1)
	{
		check_path(av[0], av + 1);
		exit(0);
	}

	my_print("#cisfun$ ");

	while ((read = getline(&line, &len, stdin)) != -1)
	{
		ptr_arr = split_string(line, delim);
		if (ptr_arr[0] != NULL)
		{
			if (my_strcmp(ptr_arr[0], "exit") == 0)
				exit(0);

			if (my_strcmp(ptr_arr[0], "env") == 0)
				print_env();
			else
				check_path(av[0], ptr_arr);

		}

		my_print("#cisfun$ ");
	}

	free(line);
	free(ptr_arr);
	my_print("\n");

	return (0);
}
