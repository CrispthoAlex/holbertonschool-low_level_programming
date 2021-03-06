#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: first node in the list
 * @n: integer
 * @idx: index of the list of the new node added. idx = 0, until position NULL
 * Return: the address of the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{/*idxnode = new node , *help = temporal store*/
	listint_t *idxnode = NULL, *help = NULL;
	unsigned int i = 0;/*iterator for index*/

	help = *head;
	if (idx != 0)
	{
		for ( ; i < (idx - 1) && help ; i++)
		{
			help = help->next;/*move the next of *head */
		}
	}
	if (!help && idx != 0)
		return (NULL);

	idxnode = malloc(sizeof(listint_t));/*reserved memory for idxnode*/
	if (!idxnode)
		return (NULL);
	idxnode->n = n;/*put in the data */
	if (idx == 0)
	{
		idxnode->next = *head;/*Make next of new node as next of *head*/
		*head = idxnode;/*move the next of *head as idxnode*/
	}
	else
	{
		idxnode->next = help->next;
		help->next = idxnode;
	}
	return (idxnode);
}
