#include "holberton.h"
/**
 * _islower - checks is lower
 * @c: The character to print
 * Return: always 0.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	return (1);
	return (0);
}
