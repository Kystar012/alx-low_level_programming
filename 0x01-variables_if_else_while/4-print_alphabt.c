#include <stdio.h>
/**
 * main - not printing q and e
 *
 * Return: 0(success)
 */
int main(void)
{
	char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	if (alpha != 'q' && alpha != 'e')
	putchar(alpha);
}
	putchar('\n');
	return (0);
	}
