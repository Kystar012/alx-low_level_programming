#include "main.h"
/**
 * _abs- computes the absolute value of an intiger
 * @a:integer to compute its absolute value
 *
 * Return: 0(success)
 */

int _abs(int a)
{
int absvalue = a;

if (a < 0)
{
	a = a * (-1);
}
	absvalue = a;
	return (absvalue);
}
