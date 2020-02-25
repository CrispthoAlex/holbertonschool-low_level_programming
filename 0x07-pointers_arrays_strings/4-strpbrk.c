#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - locates a character in a string
 * @s: string base
 * @accept: string to compare
 *
 * Return: s in n bytes
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j]) /*compare each position*/
			{
				return (s);/* */
			}
		}
	}
	s = 0;
	return (s);
} /* function end */
