#include "main.h"
/**
 * reverse_array-to reversse the element of an array
 *@a:string to be reversed
 *@n:number of elements of a string
 *
 *Return:0 (success)
 */
void reverse_array(int *a, int n)
{
	int l, m;

	for (l = 0; l < n; l++)
	{
		n--;
		m = a[l];
		a[l] = a[n];
		a[n] = m;
	}
}
