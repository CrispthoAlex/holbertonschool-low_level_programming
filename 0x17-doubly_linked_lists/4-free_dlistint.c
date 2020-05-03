#include "lists.h"

/**
 * free_dlistint -  free a dlistint_t list
 * @head: Double pointer variable, first node
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *endnext = NULL, *hfree = NULL;

	endnext = head; /*keep head*/
	while (endnext)/*free node by node */
	{
		hfree = endnext->next;
		free(endnext);/* free address memory */
		endnext = hfree;
	}
}
