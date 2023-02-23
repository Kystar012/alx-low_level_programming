#include "main.h"
/**
 * print_line- draws a straight line in the terminal
 * @n: the number of times character should be printed
 *
 * Return:0(success)
 */

void print_line(int n)
{
	int p = '-';

for (; n > 0; )
{
	_putchar(p);

	if (n == 0 || n < (n * (-1)))
{
	_putchar('\n');
}
}
}
