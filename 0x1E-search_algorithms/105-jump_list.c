#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#include "search_algos.h"
#include <math.h>

/**
* jump_list - function that searches for a value in a sorted array
* of integers using the Jump search algorithm
* @list: *list is a pointer to the first element of the single linked list
* @size: is the number of elements in array
* @value: is the value to search for
* Return: Index of value, else -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	/*Liner search | jump search => ...*/
	listint_t *head = list; /* index previous*/
	size_t inprev = 0; /* lower index of block*/
	int limit = sqrt((int)size); /* limit of block */
	size_t step = limit; /* this value can change*/
	listint_t *temp = NULL;

	if (!head)
		return (NULL);
	/* Obtain block to search */
	while (head->next && head->n < value)  /*head->next &&   */
	{
		temp = head;
		while (temp->next && temp->index < step)
			temp = temp->next;
		/*output in next node*/
		printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
		if (!temp || !temp->next || temp->n > value)  /* next node is > value */
			break;
		head = temp; /* update head */
		inprev = step;
		step += limit;
	}

	/* step = MIN(step, size - 1); Update to stay within index of list */
	printf("Value found between indexes [%lu] and [%lu]\n", inprev, temp->index);

	while (head) /* && head->index <= step) */
	{
		printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next; /* inprev++; */
	}
	return (NULL);
}
