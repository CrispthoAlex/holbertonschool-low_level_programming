#include "hash_tables.h"
/**
 * hash_table_create - Returns a pointer to the newly created hash table
 *
 * @size: size of the array
 *
 * Description: Returns a pointer to the newly created hash table.
 * If something went wrong, your function should return NULL
 *
 * Return:  A pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = NULL;
	/* Create **array with htable->size = size */

	if (size  > 0)
	{	/*create htable with malloc*/
		htable = malloc(sizeof(hash_table_t));
		if (!htable)
			return (NULL);
		/* Assignament size and array */
		htable->size = size;
		htable->array = calloc(size, sizeof(hash_node_t *));
		if (!htable->array)
		{
			free(htable);
			return (NULL);
		}
		/*for (int i = 0; i < size; i++) clean each cell of this array*/
		/*	htable->array[i] = NULL;*/

		return (htable);
	}
	return NULL;

}
