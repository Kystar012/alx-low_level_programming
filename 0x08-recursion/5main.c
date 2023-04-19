#include "main.h"
#include <stdio.h>
int _sqrt_recursion(int n)
{
        int sroot;
	if (sroot == (n / 2) || n < 1)
        {                                                            return (-1);                                 }
sroot = n * _sqrt_recursion(0.5);

        if (sroot * sroot == n)
        return (sroot);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
