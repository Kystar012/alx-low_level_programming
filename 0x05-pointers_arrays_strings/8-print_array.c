#include "main.h"
#include <stdio.h>
/**
 * print_array-prints n elements of an array int
 * @n:number of elements of the array to ne printed
 * @a:pointer yo arrays of char
 *
 * Return:0(succes)
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != n - 1)
			printf(",");
	}
	printf("\n");
}
