#include "main.h"
/**
 * puts_half- prints half of  string followed by new line
 * @str:pointer to string to be printed
 *
 * Return:void 0
 */
void puts_half(char *str)
{
int length = 0;
while (*str != '\0')
{
	length++;
	str++;
}
str -= (length / 2);
	while (*str != '\0')
{
	_putchar(*str);
	str++;
}
_putchar('\n');
}

