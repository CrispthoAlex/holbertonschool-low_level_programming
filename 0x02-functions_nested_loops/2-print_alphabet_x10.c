#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet X 10
 *
 * Return: always 0.
 */
void print_alphabet_x10(void) /* print alphabet X10 - Rename this function */
{
	char ho[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
	for (i = 0; i <= 27; i++)
	{
		_putchar(ho[i]);
	}
	_putchar('\n');
	}
}

