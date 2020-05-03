#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer variable, first node
 * @index: data to add
 * Return: 0 succes, NULL failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *indexnode = head;/*temp node to pop a node */
	unsigned int i = 0;/* index */

	if (head)
	{
		while (indexnode)
		{
			if (i == index)
				return (indexnode);/*return current node*/
			i++;
			indexnode = indexnode->next;
		}
	}
	return (NULL);
}
