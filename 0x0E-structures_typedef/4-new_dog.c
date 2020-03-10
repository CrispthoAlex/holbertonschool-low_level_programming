#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @s: pointer s length string for name/owner data type
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *_strcpy - copy name/owner string to newname/newowner
 * @dest: array string (newname/newowner)
 * @src: name/owner string to copy
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);

}
/**
 *new_dog - define a new type struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *Return: new_dog - baddog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *baddog; /* new dog/type*/
	int ls1 = 0, ls2 = 0;/* lenght string 1 and 2*/
	char *newname, *newowner;

	ls1 = _strlen(name);
	ls2 = _strlen(owner);
	newname = malloc(ls1 + 1);
	if (!newname) /* newname exists?*/
	{
		return (NULL);
	}
	newowner = malloc(ls2 + 1);
	if (!newowner)/* newowner exists?*/
	{
		free(newname);/* frees newname memory*/
		return (NULL);
	}
	baddog = malloc(sizeof(dog_t));

	if (!baddog)/* frees newname and newowner memory*/
	{
		free(newname);
		free(newowner);
		return (NULL);
	}
	_strcpy(newname, name);/*copy string name to newname */
	_strcpy(newowner, owner);/*copy string owner to newowner */
	baddog->name = newname;
	baddog->age = age;
	baddog->owner = newowner;
	return (baddog);
}
