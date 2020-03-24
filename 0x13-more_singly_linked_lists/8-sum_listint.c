#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 *
 * @head: first node in the list
 *
 * Return:  the nth node of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int i = 0;/* iterator*/
	int sumnode = 0;/*sum the nodes */

	while (head)
	{
		sumnode = sumnode + head->n;
		i++;
		head = head->next;
	}
	return (sumnode);
}
