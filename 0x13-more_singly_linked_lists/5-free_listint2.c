#include "lists.h"
/**
  *free_listint2-frees memory allocated to jead
  *@head:pointer to linked list
  *
  *Return:void
  */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current->next;
	}
	head = NULL;
}
