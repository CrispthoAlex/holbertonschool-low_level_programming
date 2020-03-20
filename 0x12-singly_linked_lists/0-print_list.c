#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: ptr to head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0; /*count nodes*/

	while (h)
	{
		if (!h->str)
		{
			printf("[%u] (nil)\n", i);
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		i++;

	}
	return (i);
}
