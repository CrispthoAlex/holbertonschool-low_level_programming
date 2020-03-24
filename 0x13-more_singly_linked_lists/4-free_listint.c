#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *endnext; /* */

	while (head)/*free node by node */
	{
		endnext = head->next;
		free(head);/* free address memory *head */
		head = endnext;
	}
}
