#include <stdio.h>

/**
 * main - to praint all hex num
 *
 * Return: 0 success
 */
int main(void)
{
	int i;

for (i = 0; i < 10; i++)
{
	putchar(i);
}
	char alpha;

for (alpha = 'a'; alpha <= 'f'; alpha++)
{
	putchar(alpha);
}
	putchar('\n');
	return (0);
}
