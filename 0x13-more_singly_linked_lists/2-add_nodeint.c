#include "lists.h"
/**
 * add_nodeint-adds a new node at the beginning of the linked link
 * @head:Pointer to a pointer
 * @n:constant integer
 *
 * Return:address of new elememt(success) orNULL(failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
			if (newnode == NULL)
			{
			return (NULL);
			}
			else
			{
			newnode->n = n;
			newnode->next = *head;
			*head = newnode;
			}
	return (newnode);
}
