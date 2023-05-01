#include "lists.h"

/**
 * print_listint-prints all element of listint_t
 * @h:pointer to listint_t
 *
 * Return:number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t index = 0;

	if (h == NULL)
	{
		printf("Error\n");
			return (1);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		index++;
		h = h->next;
	}
	return (index);
}
