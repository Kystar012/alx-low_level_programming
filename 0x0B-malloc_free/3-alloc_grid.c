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
	int **array;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		array[j] = (int *) malloc(sizeof(int) * width);
		if (array[j] == NULL)
		{
			free(array);
			for (k = 0; k <= j; k++)
				free(array[k]);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			array[j][k] = 0;
		}
	}
	return (array);
}
