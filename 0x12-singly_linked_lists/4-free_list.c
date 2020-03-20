#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp, *endnext; /* */

	temp = head;
	while (temp)
	{
		endnext = temp->next;
		free(temp->str);
		free(temp);
		temp = endnext;
	}
}
