#include "lists.h"
/**
 * free_listint-frees memory allocated to head
 *
 * Return:void
 */
void free_listint(listint_t *head)
{
	free(head);
}
