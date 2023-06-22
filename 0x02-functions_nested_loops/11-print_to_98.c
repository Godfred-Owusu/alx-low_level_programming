#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
*/
void print_to_98(int n)
{
	int i;
	int j = 98;

	if (n < j)
	{
		for (i = n; i <= j; i++)
		{
			if (i != j)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}
	else if (n > j)
	{
		for (i = n; i >= j; i--)
		{
			if (i != j)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}
	else
	{
		printf("%d", j);
		printf("\n");
	}
}
