#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @s: size/times to print " ""\"
 *
 * Return: Always 0.
 */
void print_triangle(int s)
{
	int i, j, m;

	if (s > 0)
	{
		for (i = 1; i <= s; i++)
		{
			m = s - i;

			for (j = 0; j < s; j++)
			{
				if (j < m)
				{
				_putchar (' '); /* print space */
				}
				else
					_putchar ('#'); /* print \ */
			} _putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
