#include "main.h"

/**
 * swap_int - function swaps two intergers
 * @a: - swaps and store value in b
 * @b: - swaps and store value in a
 * Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
