#include "holberton.h"

/**
 * _print_rev_recursion - prints string
 * @s: string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	/* int i = 0;*/

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
