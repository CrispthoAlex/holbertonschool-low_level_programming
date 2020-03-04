#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concats two strings to pointer
 *
 * @s1: string 1
 * @s2: string 2
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int size1 = 0, size2 = 0, size3 = 0; /*_strlen() - length string str */
	char *strconcat;

	if (s1)/* if size > 0 str ok */
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
	}
	size1 = i;

	if (s2)/* if size2 > 0 s2 ok */
	{
		j = 0;
		while (s2[j] != '\0')
			j++;
	}
	size2 = j;/* size s2, include '\0' */
	size3 = size1 + size2;

	strconcat = malloc((size3 * sizeof(char)) + 1);/*size2include'\0'*/
	if (!strconcat) /* if strconcat NULL*/
		return (NULL);
	for (i = 0; i < size1; i++)/* reinicialized i*/
		strconcat[i] = s1[i];
	for (j = 0; j < size2; j++, i++)/* j init in size1 */
		strconcat[i] = s2[j];

	strconcat[size3 + 1] = '\0';
	return (strconcat);
}
