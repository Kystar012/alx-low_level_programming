#include "main.h"
/**
  *factorial-returns the factorial of a number
  *@n:number
  *
  *Return:factor if n is more than zero,1 if its zero and -1 of less than zero
  */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
		return (1);
}
