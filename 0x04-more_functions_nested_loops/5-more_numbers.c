#include "main.h"
/**
 * more_numbers- prints numbers 0 to 14 ten times
 *
 * Return: 0(success)
 */

void more_numbers(void)
{
	int m, n;

for (m = 0; m <= 9; m++)
{
	for (n = 0; n <= 14; n++)
	{
		_putchar(n);
	}
	_putchar(m);
}
_putchar('\n');
}
