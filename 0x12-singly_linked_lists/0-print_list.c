#include "lists.h"
/**
 *print_list-prints all the elements of a list_t
 *@h:pointer to the list_t
 *
 *Return:elements of list_t
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
