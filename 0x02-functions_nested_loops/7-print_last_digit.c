#include "main.h"
/**
 * print_last_digit-prints the last digit of an integer
 * @k:number to compute the last digit
 *
 * Returns:last digit(success)
 */

int print_last_digit(int k)

{
	int lastdigit;

	lastdigit = k % 10;

if (lastdigit < 0)
{
	lastdigit = lastdigit * (-1);
}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
