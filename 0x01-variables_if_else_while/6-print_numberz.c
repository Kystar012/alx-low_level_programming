#include <stdio.h>
/**
 * main -list numbers using putchar function
 *
 * return :0(success)
 */

int main(void)
{
	int num1;

for (num1 = 0; num1 < 10; num1++)
{
	putchar((num1 % 10) + '0');
}
	putchar('\n');
	return (0);
}
