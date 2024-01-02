#include "main.h"
/**
*check_path - check if the command is exit in path
*@args: the source string array of inputs
*
**/


void check_path(char **args)
{
	if (access(args[0], F_OK) == 0)
	{
		execute(args);
	}
	else
	{
		my_print(" : FILE NOT FOUND\n");
	}
}
