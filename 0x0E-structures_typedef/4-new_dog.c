#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - define a new type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogger;
	int len1 = 0, len2 = 0;
	char *newname, *newowner;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	newname = malloc(len1 + 1);
	if (!newname)
	{
		return (NULL);
	}
	newowner = malloc(len2 + 1);
	if (!newowner)
	{
		free(newname);
		return (NULL);
	}
	dogger = malloc(sizeof(dog_t));

	if (!dogger)
	{
		free(newname);
		free(newowner);
		return (NULL);
	}
	_strcpy(newname, name);
	_strcpy(newowner, owner);
	dogger->name = newname;
	dogger->age = age;
	dogger->owner = newowner;
	return o);
}
