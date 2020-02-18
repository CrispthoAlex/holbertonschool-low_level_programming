#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @s: pointer s length string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

return (i);
}
