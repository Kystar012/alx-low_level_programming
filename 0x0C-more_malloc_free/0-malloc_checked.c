#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
  *malloc_checked-allocates memory
  *@b:number of counts
  *
  *Return:void-doesn't return anything
  */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

if (memory == NULL)
	exit(98);

return (memory);
}
