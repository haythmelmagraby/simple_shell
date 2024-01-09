#include "main.h"
/**
*check_path - check if the command is exit in path
*@args: the source string array of inputs
*
**/


void check_path(char *p_name, char **args)
{
	char *copy = copy_string(my_getenv("PATH"));
	char *dir = strtok(copy, ":");
	char *mypath;
	int flag = 0;

	if (access(args[0], F_OK) == 0)
	{
		execute(args[0], args);
		free(copy);
		return;
	}
	while (dir != NULL)
	{
		mypath = copy_string(dir);
		mypath = my_strcat(mypath, "/");
		mypath = my_strcat(mypath, args[0]);

		if (access(mypath, F_OK) == 0)
		{
			flag = 1;
			execute(mypath, args);
			free(copy);
			free(mypath);
			return;
		}
		free(mypath);
		dir = strtok(NULL, ":");
	}

	if (flag == 0)
	{
		my_print("%s : %d: %s : FILE NOT FOUND\n", p_name, 1, args[0]);
	}

	free(copy);
}
