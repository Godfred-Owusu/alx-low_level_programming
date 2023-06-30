#include "main.h"

/**
 * *_strcat - this function concatenates two strings
 * @src:- appending the string in this to dest
 * @dest:- this should be at the end
 * Return:0
 */
char *_strcat(char *dest, char *src)
{
	int length_of_string, z;

	length_of_string = 0;
	while (dest[length_of_string])
	{
		length_of_string++;
	}
	for (z = 0; src[z] != '\0'; z++, length_of_string++)
	{
	dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
