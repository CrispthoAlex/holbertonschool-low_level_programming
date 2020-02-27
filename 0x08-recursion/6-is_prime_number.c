#include "holberton.h"

/**
 * _primex - return 1 prime 0 else
 * @n: number to verified if prime
 * @x: proub % and equal n
 * Return: if it's prime 1 else 0
 */
int _primex(int n, int x)
{
	if (n == x) /*if itself */
		return (1);
	if (n % x == 0)/* verified multiple */
		return (0);
	return (_primex(n, x + 1));
}

/**
 * is_prime_number - if the input integer is a prime number
 * @n: number to be verified prime
 *
 * Return: if it's prime 1 else 0
 */
int is_prime_number(int n)
{
	if (n <= 1) /* if 0 or 1 */
		return (0);
	return (_primex(n, 2));/*inicialized _primex*/
}
