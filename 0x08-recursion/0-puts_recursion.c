#include "main.h"
/**
  *_puts_recursion - prints a string followed by a new line
  *@s:string to print
  *
  *Return:void
  */
void _puts_recursion(char *s)
{
	for (; *s != '\0'; )
	{
		_putchar(*s);
		s++;
		_puts_recursion(s + 1);
}
			_putchar('\n');
}
