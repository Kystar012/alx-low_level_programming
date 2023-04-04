#include "lists.h"
/**
  *sum_listint-retuns sum of the data of linked list
  *@head:pointer to linked list
  *
  *Return:sum of all datq in linked list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
