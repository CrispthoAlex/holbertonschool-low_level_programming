#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: ptr to head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0; /*count nodes*/

	while (h)
	{
		printf("%i\n", h->n);/*print the value in node i*/
		h = h->next;
		i++;

	}
	return (i);
}
