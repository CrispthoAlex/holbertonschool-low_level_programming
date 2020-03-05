#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - allocates memory using malloc
 * @s1: string 1
 * @s2: string 2
 * @n: integer n
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i = 0, j = 0;
	unsigned int size1 = 0, size2 = 0, size3 = 0;/*_strlen()-lengthstring */
	char *strconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1)
	{/* if size > 0 string ok */
		for (i = 0; s1[i] != '\0'; i++)
		{}
	}
	size1 = i;

	if (s2)
	{/* if size2 > 0 string2 ok */
		for (j = 0; s2[j] != '\0'; j++)
		{}
	}
	size2 = j;/* size s2*/

	if (n >= size2) /* n bytes s2 */
		n = size2;
	size3 = size1 + n;/* */
	strconcat = malloc((size3 * sizeof(char)) + 1);/*n=size2include'\0'*/
	if (!strconcat) /* if strconcat NULL*/
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)/* reinicialized i*/
		strconcat[i] = s1[i];
	for (j = 0; i < size3 && s2[j] != '\0'; j++, i++)/*i=7n-sizetostrconcat*/
		strconcat[i] = s2[j];

	strconcat[size3 + 1] = '\0';
	return (strconcat);
}
