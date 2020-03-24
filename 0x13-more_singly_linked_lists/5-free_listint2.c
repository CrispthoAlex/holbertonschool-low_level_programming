#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *endnext;

	if(!head)
		return;
	while (*head)/*free head */
	{
/* Take the next item that the head points to and save it*/
		endnext = (*head)->next;
		free(*head);/*free address memory **head */
/*Set the head to be the next item that we've stored on the side*/
		*head = endnext;
	}
}
