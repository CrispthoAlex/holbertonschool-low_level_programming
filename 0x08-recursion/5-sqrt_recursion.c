#include "holberton.h"

/**
 * _findx - returns the natural square root of a number
 * @n: number to find natural square root
 * @x: square itself
 * Return: natural square root x
 */
int _findx(int n, int x)
{
	int resul;

	resul = x * x;

	if (resul == n)
		return (x);
	if (resul < n)
		return (_findx(n, x + 1));
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find natural square root
 *
 * Return: natural square root x
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_findx(n, 0));
}
