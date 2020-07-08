#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the arguments of the program.
 * @ac: The size of the array.
 * @av: The array.
 *
 * Return: a pointer.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, cont = 0;
	char *allarg; /* str with all arguments */

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			cont++;
		cont++; /* include position for \n */
	}
	cont++; /* include position for \0 in last av */
	allarg = malloc(cont * sizeof(char));
	if (allarg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			allarg[k] = av[i][j]; /* arg, args's char */
		allarg[k] = '\n'; /* include \n */
		k++;
	}
	allarg[k] = '\0';
	return (allarg);
}
