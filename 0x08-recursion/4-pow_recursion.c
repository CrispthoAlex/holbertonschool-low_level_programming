#include "holberton.h"

/**
 * _pow_recursion - prints lenght string
 * @x: x number to be raised
 * @y: power y
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* power less 0 */
		return (-1);
	if (y == 0) /* power 0 x**0 = 0 */
		return (1);
	return (x * _pow_recursion(x, y - 1)); /* return until "y" be true  */
}
