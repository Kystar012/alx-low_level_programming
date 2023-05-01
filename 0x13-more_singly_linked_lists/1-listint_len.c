#include "lists.h"
/**
 * listint_len-prints number of elements of linked list
 * @h:Pointer to listint_t
 *
 * Return:number of elements on success
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
