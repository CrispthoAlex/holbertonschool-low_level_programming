#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: ptr to head of the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0; /*count nodes*/

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
