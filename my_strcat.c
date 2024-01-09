#include "main.h"
/**
*my_strcat - concatinate the source to destination
*@dest: destination string array
*@src: source array of string to be added
*
*Return: destination after concatination
**/

char *my_strcat(char *dest, char *src)
{
	int dest_counter = 0, src_counter = 0, result;

	while (dest[dest_counter] != '\0')
		dest_counter++;

	while (src[src_counter] != '\0')
		src_counter++;

	dest = realloc(dest, sizeof(char) * (dest_counter + src_counter + 1));
	if (dest == NULL)
	{
		my_print("can't reaaloc");
		exit(0);
	}

	result = dest_counter + src_counter + 1;
	src_counter = 0;

	while (dest_counter < result)
		dest[dest_counter++] = src[src_counter++];

	return (dest);
}
