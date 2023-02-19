#include <stdio.h>

/**
 * main - to praint all hex num
 *
 * Return: 0 success
 */
int main(void)
{
	int num;
	char alpha;
for (num = 0; num < 10; num++)
{
	putchar((num % 10) + '0');
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{
	putchar(alpha);
}
	putchar('\n');
	return (0);
}
