#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all lowercase alphebets
 * in reverse order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
return (0);
}
