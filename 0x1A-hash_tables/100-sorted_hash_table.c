#include "hash_tables.h"
/**
 * shash_table_create - Returns a pointer to the newly created hash table
 *
 * @size: size of the array
 *
 * Description: Returns a pointer to the newly created hash table.
 * If something went wrong, your function should return NULL
 *
 * Return:  A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htable = NULL;
	unsigned long int i = 0;
	/* Create **array with htable->size = size */

	if (size  > 0)
	{	/*create htable with malloc*/
		htable = malloc(sizeof(shash_table_t));
		if (!htable)
			return (NULL);
		/* Assignament size and array */
		htable->size = size;
		htable->array = malloc(size * sizeof(shash_node_t *));
		if (!htable->array)
		{
			free(htable);
			return (NULL);
		}
		/* inicialized shead & stail */
		htable->shead = NULL, htable->stail = NULL;

		for (i = 0; i < size; i++) /*clean each cell of this array*/
			htable->array[i] = NULL;

		return (htable);
	}
	return (NULL);
}

/**
 * add_node_dll - add a new node to Doubly lined list (DLL)
 * @ht: pointer to hash table
 * @key_node: pointer to new node
 * Return: void
 */
void add_node_dll(shash_table_t *ht, shash_node_t *key_node)
{
	shash_node_t *tmp = NULL;

	if (!ht->shead && !ht->stail) /* inicializated shead & stail */
	{
		key_node->sprev = NULL, key_node->snext = NULL;
		ht->shead = key_node, ht->stail = key_node;
		return;
	}

	for (tmp = ht->shead; tmp; tmp = tmp->next)
	{
		if (strcmp(key_node->key, tmp->key) < 0)/* */
		{
			key_node->snext = tmp; /* */
			key_node->sprev = tmp->sprev;
			tmp->sprev = key_node;
			if (key_node->sprev)
				key_node->sprev->snext = key_node;
			else
				ht->shead = key_node;
			return;
		}
	}
	key_node->sprev = ht->stail;
	ht->stail->snext = key_node, ht->stail = key_node; /* */
	key_node->snext = NULL;
}



/**
 * shash_table_set - gives you the index of a key
 * @ht: pointer to hash table
 * @key: string, data to be enter
 * @value: The value corresponding to a key
 * Description: Returns the index at which the key/value pair should be stored
 * in the array of the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *key_node = NULL, *tmp = NULL;
	unsigned long int index = 0; /* receive index from hey_index() */

	if (ht) /*printf("key[%s]: index[%lu]", key, index);*/
	{
		if (key && strlen(key) > 0) /* key not empty */
			index = key_index((unsigned char *)key, ht->size);
		else
			return (0);

		tmp = ht->array[index];
		while (tmp) /* update value*/
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}

		key_node = malloc(sizeof(shash_node_t));
		if (!key_node)
			return (0);
		key_node->key = strdup(key); /* assignament key */
		key_node->value = strdup(value); /* assignament value */
		key_node->next = ht->array[index]; /* assignament NULL/list */
		ht->array[index] = key_node;

		add_node_dll(ht, key_node);/* create DLL*/

		return (1);
	}
	return (0);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: string, data to be enter
 * Description: Returns the index at which the key/value pair should be stored
 *  in the array of the hash table
 * Return: Returns the value associated with the element,
 * or NULL if key couldnt be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp = NULL;
	unsigned long int index = 0; /* receive index from hey_index() */

	if (ht)
	{
		if (key && strlen(key) > 0) /* key not empty */
			index = key_index((unsigned char *)key, ht->size);
		else
			return (NULL);

		tmp = ht->array[index];
		while (tmp) /* find value*/
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);

}

/**
 * shash_table_print - prints a hash table
 * @ht: pointer to hash table
 * Description: print the key/value in the order that they appear in
 * the array of hash table
 * Return: Returns the value associated with the element,
 * or NULL if key couldnt be found
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	unsigned long int index = 0; /* index of array*/
	int flag = 0; /* verified to print ",_"  */

	if (ht)
	{
		putchar('{');
		for (index = 0; index < ht->size; index++)
		{
			tmp = ht->array[index];
			while (tmp) /* if linked list, then print it*/
			{
				if (flag == 1)
					printf(", ");
				flag = 1;
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}

}

/**
 * shash_table_print_rev - prints a hash table
 * @ht: pointer to hash table
 * Description: print the key/value in the reverse order that they appear in
 * the array of hash table
 * Return: Returns the value associated with the element,
 * or NULL if key couldnt be found
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	/*unsigned long int index = 0; index of array*/
	int flag = 0; /* verified to print ",_"  */

	if (ht)
	{
		putchar('{');
		for (tmp = ht->stail; tmp; tmp = tmp->sprev)
		{
			if (flag == 1)
				printf(", ");
			flag = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 * Description: deletes a hash table
 * Return: Void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp = NULL, *help = NULL;
	unsigned long int index = 0; /* index of array*/

	if (ht && ht->array)
	{
		while (index < ht->size)
		{
			tmp = ht->array[index];
			while (tmp)
			{
				printf("tmp[%s]: index[%lu]\n", tmp->key, index);
				help = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = help;
			}
			index++;
		}
		free(ht->array);
		free(ht);
	}

}
