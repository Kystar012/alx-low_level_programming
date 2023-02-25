#include "main.h"
/**
 * print_line- draws a straight line in the terminal
 * @n: the number of times character should be printed
 *
 * Return:0(success)
 */

void print_line(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
	int p;

for (p = 1; p <= n; p++)
{
	_putchar('-');
}
	_putchar('\n');
}
}
