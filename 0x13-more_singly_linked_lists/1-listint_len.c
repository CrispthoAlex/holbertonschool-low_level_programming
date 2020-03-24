#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0; /*count nodes*/

	while (h)
	{
		h = h->next;/*througt the nodes*/
		i++;
	}
	return (i);
}
