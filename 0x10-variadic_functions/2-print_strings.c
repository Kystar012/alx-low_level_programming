#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pstr;
	unsigned int index;
	char *str;

	va_start(pstr, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(pstr, char *);
		if (str == NULL)
		
			printf("nil");
		
		else
		
			printf("%s", str);
		
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pstr);
}
