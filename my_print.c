#include "main.h"


void my_print(const char *src)
{
	int i = 0;

	while(src[i] != '\0')
	{
		write(1,&src[i],1);
		i++;
	}
}
