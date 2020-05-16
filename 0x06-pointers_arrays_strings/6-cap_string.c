#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0, j = 0;
	char separ[] = {' ', '\t', '\n', ',', ';', '.', '!',
			'?', '"', '(', ')', '{', '}'};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32; /* difference between a uppercase*/

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (separ[j] == str[i])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
