#include "main.h"
/**
 * more_numbers- prints numbers 0 to 14 ten times
 *
 * Return: 0(success)
 */

void more_numbers(void)
{
	int m, n;

for (m = 1; m <= 9; m++)
{
	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
		_putchar('1');
		_putchar(n % 10 + '0');
	}
	_putchar('\n');
}
}
