#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @a: string
 * Return: string changed
 **/
char *rot13(char *key)
{
	int i = 0, j = 0;
	char right[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; key[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
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
