#include "main.h"
/**
  *_puts_recursion - prints a string followed by a new line
  *@s:string to print
  *
  *Return:void
  */
void _puts_recursion(char *s)
{
	int n =0;
		char *str = s;

		while (str[n] != '\0')
{
			_putchar(s[n]);
			_putchar('\n');
}
n++;
}
