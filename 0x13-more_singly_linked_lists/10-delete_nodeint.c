#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is deleted.
 * Return: 1 if it success, -1 fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;/*iterator index*/
	listint_t *idxnode = NULL, *help = NULL;/*help = temporal*/

	idxnode = *head;
	if (!*head  || !head)
		return (-1);/*fail*/

	if (index == 0)
	{
		*head = idxnode->next;/*store the address in head*/
		free(idxnode);
		return (1);
	}
	while (idxnode)
	{
		if (i == (index - 1))
		{
			help = idxnode->next;
			idxnode->next = help->next;
			free(help);
			return (1);
		}
		i++;
		idxnode = idxnode->next;/* store data */
	}
	return (-1);
}
