#include "holberton.h"

/**
 * _strlen_recursion - prints lenght string
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
        if (*s != '\0')
	{
		return (_strlen_recursion(++s) + 1);
	}
	return (0);
}
