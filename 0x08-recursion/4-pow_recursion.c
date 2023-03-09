#include "main.h"
/**
  *_pow_recursion-returns the value of x raised to the power of y.
  *@x:number to be raised(base)
  *@y:number to raise x with(quotient)
  *
  *Return:value of x raised to power of y or -1 if y is lower than 0
  */
int _pow_recursion(int x, int y)
{
	int value;

if (y < 0)
{
	return (-1);
}
else if (y > 0)
{
	value = x * _pow_recursion(x, y - 1);
	return (value);
}
else
	return (1);
}
