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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: first node in the list
 * @str:string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;

	if (!str)
		return (NULL);

	newlist = malloc(sizeof(list_t));/*reserved memory*/
	if (!newlist)
		return (NULL);
	newlist->str = strdup(str);/* duplicate string */
	newlist->len = _strlen(str);/* length new string */
	newlist->next = *head;/* head content to next */
	*head = newlist;/* value head is newlist */

	return (newlist);
}
