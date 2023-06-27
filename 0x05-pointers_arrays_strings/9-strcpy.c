#include "main.h"

/**
 * *_strcpy - function copies the string pointed to by src
 * @dest:- destination we are copying to
 * @src:- where we a copying from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
