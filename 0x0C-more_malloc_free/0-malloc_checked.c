#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
  *malloc_checked-allocates memory
  *@b:number of counts
  *
  *Return:void-doesn't return anything
  */
void *malloc_checked(unsigned int b)
{
	int *ptr;

ptr = malloc(b);

if (ptr == NULL)
	exit(98);
return (0);
}
