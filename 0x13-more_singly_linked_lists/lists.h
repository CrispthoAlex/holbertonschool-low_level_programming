#ifndef _LISTS_H_
#define _LISTS_H_
/*libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void main_first(void) __attribute__((constructor));

/*0x13 more linked lists */
size_t print_listint(const listint_t *h);/*task 0*/
size_t listint_len(const listint_t *h);/*task 1*/
listint_t *add_nodeint(listint_t **head, const int n);/*task 2*/
listint_t *add_nodeint_end(listint_t **head, const int n);/*task 3*/
void free_listint(listint_t *head);/*task 4 */
void free_listint2(listint_t **head); /*task 5*/
int pop_listint(listint_t **head);/*task 6*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);/*task 7*/
int sum_listint(listint_t *head);/*task 8*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);/*task 9*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);/*task 10*/

#endif /* _LISTS_H_ */
