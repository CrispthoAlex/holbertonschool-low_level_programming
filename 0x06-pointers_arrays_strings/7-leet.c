#include "holberton.h"
#include <stdio.h>

/**
 * leet - lower to upper
 * @array: pointer to array
 *
 * Return: Always 0.
 */
char *leet(char *array)
{
	int i, j;
	char low[] = "aeotl";
	char upp[] = "AEOTL";
	char n[] = "43071";

	i = 0;
	while (array[i] != '\0')
	{
		for (j = 0; low[j] != '\0' || upp[j] != '\0'; j++)
		{
			if (array[i] == low[j] || array[i] == upp[j])
				array[i] = n[j];
		}
	i++;
	}
	return (array);
}
