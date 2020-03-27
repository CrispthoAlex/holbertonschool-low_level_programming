#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number (base 10) to prints in binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);/* like n/(2^k), recursively */
	}
	_putchar((n & 1) + '0');/* if n=1, (n&1)=1, else (n&1)=0 */
}
