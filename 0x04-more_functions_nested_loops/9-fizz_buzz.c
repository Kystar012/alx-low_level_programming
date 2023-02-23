#include <stdio.h>
/**
 * main - prints 1 to 100 and fizz for 3,buzz for 5 and FizzBizz if \  by both
 *
 * Return:0 (success)
 */

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	if ((k % 15) == 0)
{
	printf("FizzBuzz ");
}
	else if ((k % 3) == 0)
{
	printf("Fizz ");
}
	else if ((k % 5) == 0)
{
		printf("Buzz ");
}
	else
{
	printf("%d ", k);
}
	printf("\n");
	return (0);
}
