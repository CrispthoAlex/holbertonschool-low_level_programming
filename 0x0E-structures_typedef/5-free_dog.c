#include "dog.h"

/**
 * free_dog - frees dogs
 *@d: info of the dog
 *
 *
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).age);
		free((*d).owner);
		free(d);
	}
}
