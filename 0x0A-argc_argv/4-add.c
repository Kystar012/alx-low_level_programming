#include <stdio.h>
#include <stdlib.h>
/**
  *main-adds positive numbers
  *@argc:count arguments
  *@argv:string holder
  *
  *Return:0(success) or 1 (Error)
  */
int main(int argc, char *argv[])
{
	int l, sum = 0;

	if (argc > 1)
{
	for (l = 1; l < argc; l++)

	sum += atoi(argv[l]);
	printf("%d\n", sum);
}
return (0);
}
