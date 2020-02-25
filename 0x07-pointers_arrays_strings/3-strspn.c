#include "holberton.h"
#include <stdio.h>

/**
 * *_strspn - locates a character in a string
 * @s: string base
 * @accept: string to compare
 *
 * Return: i count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				break; /* rompe el ciclo / read "continue"*/
			}
		}
		if (accept[j] == '\0')
		break;
	}

return (i);
}
