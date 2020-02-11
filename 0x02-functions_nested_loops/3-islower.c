#include "holberton.h"
/**
 * _islower - checks is lower
 * @c - type char, from 3-main.c | checks is lower
 * Return: always 0.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	return (1);
	return (0);
}
