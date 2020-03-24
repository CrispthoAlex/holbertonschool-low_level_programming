#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: first node in the list
 * @n: integer
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodes;/*temp to create new nodes*/

	if (!head)
		return (NULL);
	newnodes = malloc(sizeof(listint_t));/*reserved memory - stdlib.h */
	if (!newnodes)
		return (NULL);
	newnodes->n = n;
	newnodes->next = *head;/* next content value in addres memory *head beginning*/
	*head = newnodes;/* value head is newnodes */
	return (newnodes);
}
