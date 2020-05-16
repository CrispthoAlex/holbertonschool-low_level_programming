#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: Double pointer variable, first node
 * @n: data to add
 * Return: number of elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endnode = NULL, *last = NULL;

	endnode = malloc(sizeof(dlistint_t));
	if (endnode)
	{
		endnode->n = n; /*save new data in n*/
		endnode->next = NULL;/*  next of new last node as NULL */
		if (!*head)/* if head is NULL next of new node as NULL */
		{
			endnode->prev = NULL;
			*head = endnode;
		}
		else
		{
			last = *head; /* next of new node as head */
			while (last->next)
				last = last->next;
			endnode->prev = last;
			last->next = endnode;
		}
		return (endnode);
	}
	return (NULL);
}
