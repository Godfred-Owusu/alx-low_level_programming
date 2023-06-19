#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all lowercase alphabets without e and q
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
return (0);
}
