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
			if (accept[j] == s[i]) /*compare each position*/
			{
				return (s);/* */
			}
		}
	}
	if (accept[j] == s[i]) /* if accept is NULL return s*/
	{
		return (s);
	}

return (0);
} /* function end */
