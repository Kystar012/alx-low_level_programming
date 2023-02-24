#include "main.h"
/**
 * print_numbers - print the numbers from 0 to 9 fillowed by new line
 *
 * Return:0(success)
 */

void print_numbers(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
