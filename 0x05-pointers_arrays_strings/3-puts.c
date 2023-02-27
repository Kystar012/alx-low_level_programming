#include "main.h"
/**
 * _puts-prints a string to stdio
 * @str: string to be printed
 *
 * Returns :0 (success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
