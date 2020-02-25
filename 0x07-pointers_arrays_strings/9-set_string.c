#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to "to"
 * @to: pointer to string
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
