#include "3-calc.h"
/**
 * op_add-finds the addition of number a and b
 * @a:number to add
 * @b:number o add
 *
 * Return:sum of a and b
 */
int op_add(int a, int b)
{
	int sum = 0;

	sum = (a + b);
	return (sum);
}

/**
 * op_sub-returns the difference of a and b
 * @a:is a number
 * @b:a number to substract a from
 *
 * Return:difference of a and b
 */
int op_sub(int a, int b)
{
	int diff = 0;/*diff is difference of a and b*/

	diff = (a - b);
	return (diff);
}

/**
 * op_mul-returns the product of a and b.
 * @a:is qn integer
 * @b:is a number
 *
 * Return:product of a and b.
 */
int op_mul(int a, int b)
{
	int mul;

	mul = (a * b);
	return (mul);
}


/**
 * op_div-returns the division of a by b.
 * @a:an integer
 * @b:an integer
 *
 * Return:the division of a by b
 */
int op_div(int a, int b)
{
	int divide;

	divide = (a / b);
	return (divide);
}

/**
 * op_mod-return module of a by b.
 * @a:a number
 * @b: a number
 *
 * Return:module of a by b
 */
int op_mod(int a, int b)
{
	int module;

	module = (a % b);
	return (module);
}
