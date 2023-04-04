#include "lists.h"
/**
  *pop_listint-delete the head node of linked list
  *@head:pointer to linked list
  *
  *Return:head nodes data(n)
  */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
