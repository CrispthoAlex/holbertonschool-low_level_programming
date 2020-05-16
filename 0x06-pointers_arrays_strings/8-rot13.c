#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @a: string
 * Return: string changed
 **/
char *rot13(char *key)
{
	int i = 0, j = 0, k = 0;
	char right[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (right[k] != '\0')
		k++;
	for (i = 0; key[i] != '\0'; i++)
	{
		for (j = 0; j <= k; j++)
		{
			if (right[j] == key[i])
			{
				key[i] = rot[j];
				break;
			}
		}

	}
	return (key);
}
