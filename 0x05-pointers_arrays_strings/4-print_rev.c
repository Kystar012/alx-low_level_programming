#include "main.h"
/**
 * print_rev - prints charactera in reverse
 * @s:string of characters to be printed in reverse
 *
 * Return:0(succes)
 */
void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
	i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
				_putchar('\n');
}
