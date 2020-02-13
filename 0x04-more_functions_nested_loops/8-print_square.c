#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @s: fill square
 *
 * Return: Always 0.
 */
void print_square(int s)
{
	int i, j;

	if (s > 0)
	{
		for (i = 1; i <= s; i++)
		{
			for (j = 1; j <= s; j++)
			{
				_putchar ('#'); /* print space */
			}
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
