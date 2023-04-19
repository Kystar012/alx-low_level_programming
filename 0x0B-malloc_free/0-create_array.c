#include "main.h"
#include <stdlib.h>
/**
  *create_array-creates an array and initializes it
  *@size:size of the string
  *@c:string
  *
  *Return:pointer or null if size is 0
  */
char *create_array(unsigned int size, char c)
{
	char *arry = malloc(size);

	if (size == 0 || arry == 0)
{
		return ('\0');
}
	while (size--)
	arry[size] = c;
	return (arry);
}
