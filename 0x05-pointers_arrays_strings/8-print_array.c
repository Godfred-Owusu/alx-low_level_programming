#include <stdio.h>

/**
 * print_array - function prints the number of
 * elements in an array
 * @a:- the name of the array
 * @n:- the size of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
		printf(", ");
	}
	putchar('\n');
}
