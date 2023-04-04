#include "lists.h"
/**
  *free_listint2-frees memory allocated to head
  *@head:pointer to linked list
  *
  *Return:void
  */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		*head = current->next;
		free(*head);
	}
	head = NULL;
}
