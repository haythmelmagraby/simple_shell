#include "main.h"
/**
*check_path - check if the command is exit in path
*@args: the source string array of inputs
*
**/


void check_path_test(char **args)
{
	/*TODO: REFACTORY*/
/*
	char *path = my_getenv("PATH");
			my_print("env path is : ");
			my_print(path);
			my_print("\n");
	char *copy = copy_string(path);
			my_print("copy of path is : ");
			my_print(copy);
			my_print("\n");
	char *dir = strtok(copy,":");
			my_print("first dire is : ");
			my_print(dir);
			my_print("\n");
	char *mypath;
	while (dir != NULL)
	{
WE NEED TO
1- ADD / AND PATH TO DIR WITH CONCATINATE
2- PASS THE PATH TO EXECVE FUNCTION IF EXIST TO START FORK AND EXCUTE
		 mypath = my_strcat(dir, "/");
		 mypath = my_strcat(mypath,args[0]);
			my_print(mypath);
			my_print("\n");
		if (access(mypath, F_OK) == 0)
		{
			execute(args);
		}
		else
		{
			my_print(" : FILE NOT FOUND");
			my_print(" : ");
			my_print(args[0]);
			my_print("\n");
			my_print("dire is : ");
			my_print(dir);
			my_print("\n");
		dir = strtok(NULL,":");
			my_print("second dire is : ");
			my_print(dir);
			my_print("\n");
			exit(0);
		}
		break;
	}

*/


	if (access(args[0], F_OK) == 0)
	{
		execute(args);
	}
	else
	{
		my_print(" : FILE NOT FOUND\n");
	}
/*
	free(dir);
	free(copy);
*/
}
