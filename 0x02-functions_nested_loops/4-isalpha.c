#include "holberton.h"
/**
 * _isalpha - checks is alpha
 * @c: - type char, from 3-main.c
 * Return: always 0.
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	return (1);
	return (0);
}
