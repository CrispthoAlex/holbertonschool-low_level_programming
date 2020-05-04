#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer variable, first node
 * @n: New Data to keep in a node
 * @idx: index of node, 0 to n-node
 * Return: 0 list empty, sum of int data of the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *idxnode = NULL, *help = *h;
	unsigned int i = 0; /*iterator for index*/

	idxnode = malloc(sizeof(dlistint_t));/*reserved memory for idxnode*/
	if (!idxnode || (!help && idx != 0))
	{
		if (idxnode)/* free idxnode when help == NULL && idx > 0 */
			free(idxnode);
		return (NULL);
	}
	idxnode->n = n;/* put in the data */
	if (idx == 0) /*In the first node */
	{
		if (!help)
			idxnode->next = NULL;
		else
		{
/*Make next of new node as next of *head | move the prev of *headd as idxnode*/
			idxnode->next = help, help->prev = idxnode;
		}
		/* move prev of idxnode to NULL | take value of idxnode */
		idxnode->prev = NULL, *h = idxnode;
		return (idxnode);
	}
	for ( ; i < (idx - 1); i++)
	{
		if (!help)
		{
			free(idxnode);
			return (NULL);
		}
		help = help->next;/*move the next of *head */
	}
	/* same as head->next */
	idxnode->next = help->next, idxnode->prev = help;
	if (help->next) /* if not in NULL */
		help->next->prev = idxnode;
	help->next = idxnode;
	return (idxnode);
}
