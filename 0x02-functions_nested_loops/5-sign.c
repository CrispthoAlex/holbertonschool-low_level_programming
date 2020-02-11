#include "holberton.h"
/**
 * print_sign - sign
 * @n: n - type int
 * Return: always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('1');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
