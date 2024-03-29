#include "lists.h"
/**
 * add_nodeint_end-add nodes at the end of linked list
 * @head:pointer to a pointer
 * @n:contant integer
 *
 * Return:(success)address of new element or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode, *last;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
	{
		return (NULL);
	}
		endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
	}
	else
	{
		last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = endnode;
	}
	return (*head);
}
