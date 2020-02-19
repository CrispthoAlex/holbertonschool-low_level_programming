#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - returns string reverse
 * @s: pointer s string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int j;
	int revs;

	i = 0; /* first count */
	/* *(str + i) = str[i] print each character */
	while (*(s + i) != '\0')
	{
		i++; /* count */
	}

	j = i - 1; /* first, the last position */
	i = 0; /* inicializate i */
	while (i < j)
	{
		revs = s[i];
		s[i] = s[j];
		s[j] = revs;
		i++;
		j--;
	}
}
