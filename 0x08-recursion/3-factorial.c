#include "main.h"
/**
  *factorial-returns the factorial of a number
  *@n:number
  *
  *Returns:factor(success) or -1(error)
  */
int factorial(int n)
{
	if (n >= 0)
	{
		return (n * factorial(n - 1));
	}
	else
	return (-1);
}
