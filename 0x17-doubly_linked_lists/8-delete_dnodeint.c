#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: pointer variable, first node
 * @index: index of node, 0 to n-node
 * Return: 1 sucess, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;/*iterator index*/
	dlistint_t *idxnode = NULL, *help = NULL;/* temporal*/

	idxnode = *head;
	if (*head/* || head*/)
	{
		if (index == 0)
		{
			*head = idxnode->next; /*store the address in head*/
			if (idxnode->next)
				(*head)->prev = NULL;
			free(idxnode);
			return (1);
		}
		while (idxnode && i < (index - 1))
		{
			idxnode = idxnode->next, i++;
		}
		if (idxnode || idxnode->next)
		{
			help = idxnode->next->next;
			free(idxnode->next), idxnode->next = help;
			if (idxnode->next)
				idxnode->next->prev = idxnode;/* store data */
			return (1);
		}
		else
			return (-1);
	}
	return (-1);
}
