#include <stdio.h>
 /**
  * print_line- draws a straight line in the termina
  * @n:the number of times character should be printed
  *
  * Return:0(success)
  */

int main(void)
{
	int n;
        int p = '-';
	printf("Enter n=");
	scanf("%d\n", n);

for (; n > 0; )
{
        printf("%d",p);

        if (n == 0 || n < (n * (-1)))
{
	printf("\n");
	return (0);
}
}
}
