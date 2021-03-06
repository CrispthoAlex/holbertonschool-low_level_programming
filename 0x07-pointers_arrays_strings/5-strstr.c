#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a character in a string
 * @haystack: string base
 * @needle: string to compare
 *
 * Return: haystack in n bytes
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	int n; /* count */

	for (i = 0; haystack[i] != '\0'; i++)
	{
		n = i;
		for (j = 0; haystack[i] == needle[j] && haystack[i] != '\0'
			     && needle[j] != '\0'; i++, j++)
			continue; /* verifie and continue */

		if (needle[j] == '\0')
			return (haystack += n);
	}
	return (0);
}
