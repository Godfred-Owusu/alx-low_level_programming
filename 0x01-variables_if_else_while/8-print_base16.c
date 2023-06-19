#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all digits from 0-9 using
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
return (0);
}
