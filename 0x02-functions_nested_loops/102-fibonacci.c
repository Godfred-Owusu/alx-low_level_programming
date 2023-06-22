#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
*/
int main(void)
{
	unsigned long firstnum = 1;
	unsigned long secondnum = 2;
	unsigned long i;
	unsigned long fibo;

	printf("%lu, %lu, ", firstnum, secondnum);
	for (i = 0; i < 48; i++)
	{
		fibo = firstnum + secondnum;
		firstnum = secondnum;
		secondnum = fibo;
		if (i != 47)
			printf("%lu, ", fibo);
		else
			printf("%lu", fibo);
	}
	printf("\n");
	return (0);
}
