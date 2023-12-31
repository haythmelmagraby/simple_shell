#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>
/**
*execute - execute the application in spacific path
*@args: pointer array of spacific path
**/

void execute(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		my_print("can't create pid");
		exit(1)
	}
	if (pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror("");
			exit(0);
		}
	}
	else
	{
		wait(&status);
	}
}
