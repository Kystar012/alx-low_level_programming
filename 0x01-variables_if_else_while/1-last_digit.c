#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0(success)
 */

int main(void)
{
	/*
	 * n is my variable
	 * m -is my last digit
	 */
	int n;

	int m = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* This is my code */
	if (m > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6, &m != 0)
	{printf("The last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("The last digit of %d is %d and is 0\n", n, m);
	}
	return (n%10);
}
