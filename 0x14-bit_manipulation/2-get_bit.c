#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: position searched to return
 * Return: Value of the bit index or -1 (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0; /*count nodes*/

	if (index < 64)/*System of 64 bits*/
	{
		while (i <= index)
		{
			if (i == index)/*when position is found*/
				return (n & 1);/*compare n=1 if 1 else 0 */
			n >>= 1;
			i++;
		}
	}
	return (-1);
}
