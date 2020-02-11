#include "holberton.h"
/**
 * _abs - evaluate absolute
 * @i: integer to evaluate
 * Return: always integer.
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	return (i); /*return number absolute*/
}
