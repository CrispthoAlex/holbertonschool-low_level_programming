#include "holberton.h"
/**
 * _isalpha - checks is alpha
 *
 * Return: always 0.
 */
int _isalpha(int c) /* c - type char, from 3-main.c  */
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	return (1);
	return (0);
}
