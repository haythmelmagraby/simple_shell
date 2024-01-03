#include "main.h"
/**
*my_print - function print array of character
*@src: constant array of character to print
*
*/

void my_print(const char *src)
{
	int i = 0;

	if (src == NULL)
	{
		write(1, "NULL", 4);
		return;
	}
	while (src[i] != '\0')
	{
		write(1, &src[i], 1);
		i++;
	}
}
