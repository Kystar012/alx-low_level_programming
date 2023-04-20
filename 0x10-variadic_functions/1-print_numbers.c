#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers-print all numbers
  *@separator:string to be pronted between numbers
  *@n:number of integers passed to tje function
  *
  *Return:0(success)
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pnum;
	unsigned int index;

	va_start(pnum, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(pnum, int));

	if (index != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(pnum);
}
