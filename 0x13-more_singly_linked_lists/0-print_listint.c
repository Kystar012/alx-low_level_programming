#include "lists.h"
/**
 * print_listint-prints all element of listint_t
 * @h:pointer to listint_t
 *
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numnodes++;
		h = h->next;
	}
	return (numnodes);
}
