#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @index: node position to return
 * @head: first node in the list
 *
 * Return:  the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *indexnode = head;/*temp node to pop a node */
	unsigned int i = 0;/* the actual index */

	if (head)
	{
		while (indexnode)
		{
			if (i == index)
			{
				return (indexnode);/*return current node*/
			}
			i++;
			indexnode = indexnode->next;
		}
	}
	return (NULL);
}
