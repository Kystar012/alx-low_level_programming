#include "function_pointers.h"
#include <stdio.h>
/**
  *int_index-seaches for an intinan array of elements
  *@array:holds elements to be searched(its a pointer)
  *@size:length of and array
  *@cmp:compares the strings
  *
  *Return:0(success) or -1 failure
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
			return (-1);
}
