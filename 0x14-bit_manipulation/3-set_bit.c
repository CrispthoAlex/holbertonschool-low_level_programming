#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to n
 * @index: position searched to return
 * Return: 1 if worked, or -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)/*System of 64 bits*/
	{
		*n = *n | 1 << index;/* left shift, positionbinary*2^k */
	}
	return (-1);
}
