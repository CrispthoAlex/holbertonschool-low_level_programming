#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: Double pointer variable
 * @newdata: data to add
 * Return: number of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int newdata)
{
	dlistint_t *newnode = NULL;

	if (!*head)
	{
		return (NULL);
		/**head->n = newdata;
		 *head->prev = NULL;
		 *head->next = NULL;*/
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode)
	{
		newnode->n = newdata; /*save new data in n*/
		newnode->next = *head; /* next of new node as head */
		newnode->prev = NULL;/*  previous of new node as NULL */
		*head->prev = newnode;/*prev of head node to new node */
		*head = newnode; /* move the head to point to the new node  */
		return (newnode);
	}
	return (NULL);
}
