#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest:- string destination
 * @src:- string source
 * @n:- number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byte;

	for (byte = 0; byte < n && src[byte] != '\0'; byte++)
		dest[byte] = src[byte];
	for (; byte < n; byte++)
		dest[byte] = '\0';
	return (dest);
}
