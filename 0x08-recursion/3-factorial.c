#include "holberton.h"

/**
 * factorial - prints lenght string
 * @n: n factorial
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
