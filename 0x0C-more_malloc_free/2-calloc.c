#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *_calloc-allocates memory for an array
  *@nmemb:number of elements
  *@size:size of an array
  *
  *Return:NULL(error) or pointer on success
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *fill;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return ('\0');
	memory = malloc(nmemb * size);

	if (memory == NULL)
		return ('\0');
	fill = memory;
	for (index = 0; index < (size * nmemb); index++)
		fill[index] = '\0';
	return (memory);
}
