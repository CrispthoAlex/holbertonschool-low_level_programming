#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap a and b
 * @a: pointer a to swap
 * @b: pointer b to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int t; /* variable temporal */

	t = *a; /* keep temporal t = 98 */
	*a = *b; /* *a = 42 */
	*b = t; /* *b = 98 */
}
