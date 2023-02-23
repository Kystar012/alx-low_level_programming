#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the termimal
 * @n: number of times n should be printed
 *
 * Return: 0(success)
 */

void print_diagonal(int n)
{
int f, k;

for (f = 1; f <= n; f++)
{
	for (k = 1; k <= n; k++)
	{
	if (f == k && n > 0)
{
	_putchar('\\');
}
	else
{
	_putchar('\n');
}
}
}
	_putchar('\n');
}
