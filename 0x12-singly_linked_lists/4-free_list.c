#include "lists.h"
/**
  *free_list-free me,ory allocated to list
  *@head:pointer holding address of next element
  *
  *Return:null
  */
void free_list(list_t *head)
{
	list_t *copy;

	while (head)
	{
		copy = head->next;
		free(head->str);
		free(head);
		head = copy;
	}
}
