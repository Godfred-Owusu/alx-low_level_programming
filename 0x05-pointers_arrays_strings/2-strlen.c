#include "main.h"

/**
 *_strlen - function prints the length is a string
 *@s:- the sring we are finding the length
 *Return:the length of the string
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
