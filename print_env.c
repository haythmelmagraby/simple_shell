#include "main.h"
/**
*print_env - print all environ variables
*
**/

void print_env(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		my_print("%s", environ[i]);
		my_print("\n");
		i++;
	}
}
