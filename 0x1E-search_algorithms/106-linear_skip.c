#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#include "search_algos.h"
#include <math.h>

/**
* linear_skip - function that searches for a value in a sorted skip list
* of integers
* @list: *list is a pointer to the first element of the single linked list
* @value: is the value to search for
* Return: Index of value, else -1
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head = list;
	skiplist_t *temp = NULL;

	if (!head)
		return (NULL);

	while (head->express || head->next)
	{
		if (head->express)  /* Update temp  */
			temp = head->express;
		printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
		if (temp->n < value && temp->express)
			head = head->express;
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       head->index, temp->index);

	while (head) /* && head->index <= step) */
	{
		printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next; /* inprev++; */
	}
	return (NULL);
}
