#include "main.h"
/**
*check_path - check if the command is exit in path
*@args: the source string array of inputs
*
**/


void check_path(char **args)
{
	char *path = my_getenv("PATH");
	char *copy = copy_string(path);
	char *dir = strtok(copy, ":");
	char *mypath;
	int flag = 0;

	if (access(args[0], F_OK) == 0)
	{
		execute(args[0], args);
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
		}
		 dir = strtok(NULL, ":");
	}
	if (flag == 0)
	{
		my_print(args[0]);
		my_print(" : FILE NOT FOUND\n");
	}
	free(copy);
	free(dir);
}
