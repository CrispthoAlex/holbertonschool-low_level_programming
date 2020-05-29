#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: string, data to be enter
 * Description: Returns the index at which the key/value pair should be stored
 *  in the array of the hash table
 * Return: Returns the value associated with the element,
 * or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
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
