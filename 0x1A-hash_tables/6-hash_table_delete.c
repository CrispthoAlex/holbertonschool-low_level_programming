#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 * Description: deletes a hash table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *help = NULL;
	unsigned long int index = 0; /* index of array*/

	if (ht && ht->array)
	{
		for (index = 0; index < ht->size; index++)
		{
			tmp = ht->array[index];
			while (tmp)
			{

				help = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = help;
			}
		}
		free(ht->array);
		free(ht);
	}

}
