#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This program prints a-z using _putchar
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
