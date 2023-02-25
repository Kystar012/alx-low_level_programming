#include "main.h"
/**
 * print_square-prints a sqiare followed by a new line
 * @size:is soze of a square
 *
 * Return:0(success)
 */

void print_square(int size)
{
if (size <= 0)
{
	_putchar('\n');
}
else
{
	int l, m;

	for (l = 0; l < size; l++)
{
	for (m = 0; m < size; m++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}
