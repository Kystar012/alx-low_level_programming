#include <stdio.h>

/**
 * main - to praint all hex num
 *
 * Return: 0 success
 */
int main(void)
{
	int num1;
	char alpha;

for (num1 = 0; num1 < 10; num1++)
{
	putchar((num1 % 10) + '0');
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{
	putchar(alpha);
}
	putchar('\n');
	return (0);
}
