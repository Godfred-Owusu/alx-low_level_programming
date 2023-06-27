#include "main.h"

/**
 *print_rev - function prints string in a reverse other
 *@s:- the sring we are printing
 *Return: reverse string and a new line
*/
void print_rev(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	while (length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
