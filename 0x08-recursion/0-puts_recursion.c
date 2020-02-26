#include "holberton.h"

/**
 * _puts_recursion - prints string
 * @s: string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	} else
	_putchar('\n');
}
