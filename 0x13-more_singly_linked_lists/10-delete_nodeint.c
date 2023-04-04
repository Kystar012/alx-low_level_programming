#include "lists.h"
/**
  *delete_nodeint_at_index-deletes a node at index of linked list
  *@head:pointer to a pointer
  *@index:position of nodes
  *
  *Return:1(success) -1(failure)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes;
	listint_t *current, *dup = *head;

	if (dup == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
			free(dup);
		return (1);
	}
	for (nodes = 0; nodes < (index - 1); nodes++)
	{
		if (dup->next == NULL)
			return (-1);
		dup = dup->next;
	}
	current = dup->next;
	dup->next = current->next;
	free(current);
	return (1);
}
