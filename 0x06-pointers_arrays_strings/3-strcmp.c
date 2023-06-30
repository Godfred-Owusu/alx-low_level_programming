#include "main.h"

/**
 * _strcmp:- compares two string
 * @s1:- pointer to first string
 * @s2:- pointer to second dtring
 * Return: value less than 0 if string is less then other
 * value greater than 1 if string is greater than other
 */
int _strcmp(char *s1, char *s2)
{
	int counter, compareValue;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compareValue = s1[counter] - s2[counter];
	return (compareValue);
}
