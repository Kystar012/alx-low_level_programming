#include "main.h"
/**
 * print_sign- to print the sign of a number
 * @n:integer to check the sign of a number
 *
 * Return: 1 if n is greater than zero,0 if n is zero and -1 if less than zero
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('-');
	return (-1);
}

else
{
	_putchar('0');
	return (0);
}
}
