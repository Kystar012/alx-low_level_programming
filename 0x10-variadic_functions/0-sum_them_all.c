#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all-returns sum of all argumemts passed to function
 *@n:constant number to be added
 *
 *Return:sum of all its parameters or 0 if n is 0.
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);

	return (sum);
}
