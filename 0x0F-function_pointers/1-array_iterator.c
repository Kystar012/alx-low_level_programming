#include "function_pointers.h"
#include <stdio.h>
/**
  *array_iterator-prints each array element on a new line
  *@array:holds elements to be printed
  *@size:number of elements to print
  *@action:pointer to print in hex.
  *Return:void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
