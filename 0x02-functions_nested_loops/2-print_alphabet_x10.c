#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lowercase ten times.
 *
 * Return: 1 (always success)
 */

void print_alphabet_x10(void)

{
	char i, y;

for (y = 0; y < 10; y++)
{
for (i = 'a'; i  <= 'z'; i++)
{
	_putchar(i);
}
	_putchar('\n');
}
}
