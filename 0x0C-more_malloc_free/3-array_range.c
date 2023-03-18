#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *array_range-creates an array of integers
  *@min:min number of elements
  *@max:maximum number of elements in array
  *
  *Return:NULL(failure) or pointer to an array(success)
  */
int *array_range(int min, int max)
{
	int *array, size, index;

	if (min > max)
		return ('\0');
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return ('\0');
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
