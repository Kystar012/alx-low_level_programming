#include "lists.h"
/**
 * free_listint-frees memory allocated to head
 *@head:Pointer
 * Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
	free(head);
	head = current;
	}
}
