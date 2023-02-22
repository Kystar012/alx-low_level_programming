#include "main.h"
/**
 * times_table- print 9 times table starting with 0
 *
 * Return:0 (success)
 */

void times_table(void)
{
	int x, y, multp;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			multp = x * y;
			_putchar(44);
			_putchar(32);
			if (multp <= 9)
			{
				_putchar(32);
			_putchar(multp + 48);
		}
		else
		{
			_putchar((multp / 10) + 48);
			_putchar((multp % 10) + 48);
		}
	}
	_putchar('\n');
}
}
