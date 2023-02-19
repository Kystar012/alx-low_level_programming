#include <stdio.h>
/**
 * main -To print 3 digit combo
 *
 * Return:0 success
 */

int main(void)
{
	int x, z, y;

for (x = 0; x < 10; x++)
{
for (z = 1; z < 10; z++)
{
for (y = 2 ; y < 10; y++)
{
if (y > z && z > x)
{
	putchar(x + '0');
	putchar(z + '0');
	putchar(y + '0');
if (x != 7 || z != 8)
{
	putchar(',');
	putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
