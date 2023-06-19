#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all alphabet in both
 * lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (j = 65; j <= 90; j++)
		putchar(j);
	putchar('\n');
return (0);
}
