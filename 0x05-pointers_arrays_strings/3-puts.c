#include "main.h"

/**
 * _puts - function prints stiting to stdout
 * @str:- print this dtring
 * Return:String and new line
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
			i++;
	}
	_putchar('\n');
}
