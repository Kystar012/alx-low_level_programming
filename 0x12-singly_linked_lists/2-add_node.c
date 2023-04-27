#include "lists.h"
/**
*add_node-adds a new node at the begining of the of a list_t list
*@head:begining of the lists_t list
*@str:string pointer to a constant character
*
*Return:address of the new element or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = copy;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
