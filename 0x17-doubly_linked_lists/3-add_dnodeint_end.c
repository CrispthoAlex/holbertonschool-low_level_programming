#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: Double pointer variable
 * @newdata: data to add
 * Return: number of elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int newdata)
{
	dlistint_t *endnode = NULL, *last = NULL;

	endnode = malloc(sizeof(dlistint_t));
	if (head || endnode)
	{
		endnode->n = newdata; /*save new data in n*/
		endnode->next = NULL;/*  next of new last node as NULL */
		if (!*head)/* if head is NULL next of new node as NULL */
			*head = endnode;
		else
		{
			last = *head; /* next of new node as head */
			while (last->next)
				last = last->next;
			last->next = endnode;
		}
		return (endnode);
	}
	return (NULL);
}
