#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: times to print _
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		_putchar ('_'); /* print line */
	}
	_putchar ('\n');
}
