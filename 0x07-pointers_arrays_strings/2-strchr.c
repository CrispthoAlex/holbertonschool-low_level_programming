#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: pointer to the source of dat to be copied
 *
 * Return: s ( char o NULL)
 */
char *_strchr(char *s, char c)
{
	/**unsigned int i;*/

	if (c == '\0') /* if c is NULL return s*/
	{
		s = '\0';
	}
	else
	{
		for (; *s != '\0'; s++)
		{
			if (*s == c) /*compare each position*/
			{
				return (s);
			}
		}
	}

	return (s);
}
