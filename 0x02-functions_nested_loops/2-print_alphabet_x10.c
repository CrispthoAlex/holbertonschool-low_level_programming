#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet X 10
 *
 * Return: always 0.
 */
void print_alphabet_x10(void) /* print alphabet X10 - Rename this function */
{
	char ho[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
	for (i = 0; ho[i] != '\0'; i++)
	{
		_putchar(ho[i]);
	}
	_putchar('\n');
	}
}
