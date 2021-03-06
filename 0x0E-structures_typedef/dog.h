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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
