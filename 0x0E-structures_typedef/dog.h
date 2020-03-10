#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type struct dog
* @name: name dog
* @age: age dog
* @owner: owner dog
 *
* Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);/*1-nitialize a variable of type struct dog*/
void print_dog(struct dog *d);/*2-prints a struct dog */
dog_t *new_dog(char *name, float age, char *owner);/*4-creates a new dog*/

#endif
