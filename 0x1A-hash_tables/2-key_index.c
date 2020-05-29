#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @size: size of array
 * @key: data to be enter
 * Description: Returns the index at which the key/value pair should be stored
 *  in the array of the hash table
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (size > 0)
		index = hash_djb2(key) % size;

	return (index);
}
