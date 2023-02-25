#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the termimal
 * @n: number of times n should be printed
 *
 * Return: 0(success)
 */

void print_diagonal(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
	int f, k;

for (f = 0; f < n; f++)
{
	for (k = 0; k < n; k++)
	{
	if (k == f)
	_putchar('\\');
	else if (k < f)
	_putchar(' ');
	}
	_putchar('\n');
}
}
}
