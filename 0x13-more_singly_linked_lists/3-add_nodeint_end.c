#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: first node in the list
 * @n: integer
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode, *temp;

	if (!head)
		return (NULL);
	endnode = malloc(sizeof(listint_t));/*reserved memory*/
	if (!endnode)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;/* End List */
	if (!*head)
		*head = endnode;/* value head is endlist */
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = endnode;
	}
	return (endnode);
}
