#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list.
 * @head: list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *revnode = NULL, *help = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		help = (*head)->next;
		(*head)->next = revnode;
		revnode = *head;
		*head = help;
	}
	*head = revnode;
	return (*head);
}
