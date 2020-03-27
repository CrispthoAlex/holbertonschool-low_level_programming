#include "holberton.h"

/**
 * flip_bits - sets the value of a bit to 0 at a given index
 * @n: number to compare
 * @m: number to compare
 * Return: 1 if worked, or -1 (error)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0; /* count */

	while ((n ^ m) != 0) /*if n and m bits compared equal to 1 */
	{
		if ((n ^ m) & 1)
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
