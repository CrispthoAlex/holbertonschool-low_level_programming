#include "lists.h"

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: string length - i
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0; /* lenght string */

	while (s[i])
		i++;
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: first node in the list
 * @str:string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endlist, *temp;

	if (!str)
		return (NULL);

	endlist = malloc(sizeof(list_t));/*reserved memory*/
	if (!endlist)
		return (NULL);
	endlist->str = strdup(str);/* duplicate string */
	endlist->len = _strlen(str);/* length new string */
	endlist->next = NULL;/* head content to next */
	if (!*head)
	{
		*head = endlist;/* value head is endlist */
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = endlist;
	}
	return (endlist);
}
