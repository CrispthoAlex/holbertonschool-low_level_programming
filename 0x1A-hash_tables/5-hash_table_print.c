#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 * Description: print the key/value in the order that they appear in
 * the array of hash table
 * Return: Returns the value associated with the element,
 * or NULL if key couldnt be found
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
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
