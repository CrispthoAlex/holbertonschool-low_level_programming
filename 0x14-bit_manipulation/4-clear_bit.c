#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to n
 * @index: position searched to return
 * Return: 1 if worked, or -1 (error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)/*System of 64 bits*/
	{
/* left shift, positionbinary*2^k */
/* "~" if the ith bit is 0, it will change it to 1 and vice versa*/
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
