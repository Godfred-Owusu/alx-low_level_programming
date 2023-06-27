#include "main.h"

/**
 * puts_half - function print half of a sting
 * @str:- contains the string we are to print half
 * Return:0
 */
void puts_half(char *str)
{
	int n, i;
	int length_of_the_string = 0;

	while (str[length_of_the_string])
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 == 1)
	{
		n = (length_of_the_string - 1) / 2;
		for (i = n; i <= length_of_the_string; i++)
			_putchar(str[i]);
	}
	else
	{
		n = length_of_the_string / 2;
		for (i = n; i <= length_of_the_string; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
