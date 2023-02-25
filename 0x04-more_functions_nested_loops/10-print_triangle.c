#include "main.h"
/**
 * print_triangle-prints a triangle
 * @size:triangle size
 *
 * Return:0(success)
 */

void print_triangle(int size)
{
if (size <= 0)
{
	_putchar('\n');
}
else
{
	int j, k;

	for (j = 1; j <= size; j++)
	{
		for (k = size - j; k > 0; k--)
			_putchar(' ');

			for (k = 0; k < j; k++)

			_putchar('#');

		_putchar('\n');
	}
}
}
