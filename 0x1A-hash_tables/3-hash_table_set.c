#include "hash_tables.h"
/**
 * hash_table_set - gives you the index of a key
 * @ht: pointer to hash table
 * @key: string, data to be enter
 * @value: The value corresponding to a key
 * Description: Returns the index at which the key/value pair should be stored
 *  in the array of the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *key_node = NULL, *tmp = NULL;
	unsigned long int index = 0; /* receive index from hey_index() */

	if (ht)
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

		key_node = malloc(sizeof(hash_node_t));
		if (!key_node)
			return (0);
		key_node->key = strdup(key); /* assignament key */
		key_node->value = strdup(value); /* assignament value */
		key_node->next = ht->array[index]; /* assignament NULL/list */
		ht->array[index] = key_node;

		return (1);
	}
	return (0);

}
