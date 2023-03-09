#include "main.h"
/**
  *_sqrt_recursion-returns the natural square root of a number
  *@n:number to find square root for
  *
  *Return:natural square root of a number or -1(error)
  */
int _sqrt_recursion(int n)
{
	int sroot;

	if (sroot * sroot == n)
	{
	 sroot = n * _sqrt_recursion(0.5);	
		return (sroot);
	}
	else if (sroot == (n / 2) || n < 1)
	{
	return (-1);
	}
	else
		return (1);
}
