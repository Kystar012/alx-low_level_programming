#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main-prints the result of operation
  *@argc:argument count
  *@argv:argument vector
  *
  *Return:results or Error(98,99,100)
  */
int main(int argc, char* argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	char operator = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(operator) == NULL || op[1] != '\0')
	{
		printf("Error\n");
			exit(99);
	}
	if ((operator == '/' && num2 == 0) || (operator == '%' && num2 == 0))
	{
		printf("Error\n");
			exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
