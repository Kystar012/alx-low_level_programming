#include "lists.h"
/**
  *insert_nodeint_at_index-inserts a new node at a goven point
  *@head:pointer to pointer
  *@idx:count of nodes
  *@n:constant number
  *
  *Return:address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *newnode, *copy = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
		newnode->n = n;
	if (idx == 0)
	{
		newnode->next = copy;
		*head = newnode;
		return (newnode);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
		{
			return (NULL);
		}
		copy = copy->next;
	}
	newnode->next = copy->next;
	copy->next = newnode;
	return (newnode);
}
