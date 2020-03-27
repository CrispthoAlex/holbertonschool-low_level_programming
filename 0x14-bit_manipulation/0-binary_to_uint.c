#include "holberton.h"

/**
 * binary_to_uint - prints all the elements of a listint_t list
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: number of nodes
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0; /*count nodes*/
	unsigned int numint = 0;/*number to return */

	if (b)
	{
		while (b[i] != '\0')
		{/*if other number like "2" or letter return 0*/
			if (b[i] != '0' && b[i] != '1')
				return (0);
			i++;
		}
		i = 0;/*re-inicializate*/
		while (b[i] != '\0')
		{
			numint = numint << 1;/*like 1*2^k */
			if (b[i] == '1')
				numint = numint + 1;
			i++;
		}
		return (numint);
	}
	return (0);
}
