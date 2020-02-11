#include "holberton.h"
/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: always 0.
 */
void print_alphabet(void)
{
	char ho[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; ho[i] != '\0'; i++)
	{
		_putchar(ho[i]);
	}
	_putchar('\n');
}
