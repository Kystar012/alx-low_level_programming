#include "main.h"
/**
 * puts2-prints every other character of a string, starting with the first char
 * @str: string to be printed
 *
 * Return:0(success)-void
 */
void puts2(char *str)
{
char i = '0';

for (; str[i] != '\0'; i++)
{
	if ((i % 2) == '0')
		_putchar(str[i]);
	else
		continue;
}
_putchar('\n');
}
