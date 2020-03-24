#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head nodes data (n)
 * @head: first node in the list
 *
 * Return: the address of the new element
 */
int pop_listint(listint_t **head)
{
	listint_t *nextnode = NULL;/*temp node to pop a node */
	int popdata;/* head node's data(n) to return */

	if (!*head)
		return (0);
/*Take the next item that the head points to and save it */
	nextnode = (*head)->next;
	popdata = (*head)->n;
/*frees *head */
	free(*head);
/* Set the head to be the next item that we've stored on the side */
	*head = nextnode;

	return (popdata);
}
