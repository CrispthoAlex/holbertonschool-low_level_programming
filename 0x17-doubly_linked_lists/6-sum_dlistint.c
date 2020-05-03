#include "lists.h"

/**
 * sum_dlistint - returns the nth node of a dlistint_t linked list
 * @head: pointer variable, first node
 *
 * Return: 0 list empty, sum of int data of the list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sumnode = 0;/* sum nodes */

	while (head)
	{
		sumnode += head->n;
		head = head->next;
	}
	return (sumnode);
}
