#include "lists.h"
/**
*add_node_end-ads node at end of the list_t
*@head:pointer to first element of list_t
*@str:pointer to constant character
*
*Return:address of last element or null
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *copy;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	copy = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = copy;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
