#include <stdio.h>
/**
 * main -print all possible combo of two digits
 *
 * Return: 0 Success
 */

int main(void)
{
	int x, i;

for (x = 0; x <= 8; x++)
{
for (i = 1; i <= 9; i++)
{
if (i > x)
{
	putchar(x + '0');
	putchar(i + '0');
if (x != 8 || i != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
