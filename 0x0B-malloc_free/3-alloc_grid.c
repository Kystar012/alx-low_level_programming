#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *alloc_grid-returns a pointer to a 2D array of integers
  *@width:row of the 2D array
  *@height:column of the 2D array
  *
  *Return:NULL(failure) and a pointer if  successful
  */
int **alloc_grid(int width, int height)
{
	int j = 0, k = 0;/*j and k are array elements*/
	int matrix[w][h];/*w-for width and h-for height*/
	int *ptr = malloc((w * h) * sizeof(int));/*allocating memory to pointer*/


if (w <= 0 || h <= 0)
	return ('\0');
for (j = 0; j < w * h; j++)
	ptr[j] = j + 1;
if (ptr == NULL)
	return ('\0');



}
