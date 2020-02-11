#include "holberton.h"
/**
 * print_last_digit - evaluate absolute
 * @n: last digit
 * Return: return last digit n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * (-1);
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
	}
return (n); /*return last digit */
}
