#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all digits from 0-9 using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
return (0);
}
