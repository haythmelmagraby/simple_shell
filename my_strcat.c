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
	int dest_counter = 0, src_counter = 0;

	while (dest[dest_counter] != '\0')
		dest_counter++;

	while (src[src_counter] != '\0')
		dest[dest_counter++] = src[src_counter++];
	dest[dest_counter] = src[src_counter];

	return (dest);
}
