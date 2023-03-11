#include <stdio.h>
#include <stdlib.h>
/**
  *main-multiplies two numbers passed as arguments
  *@argc:counts number of arguments
  *@argv:stores the arguments
  *
  *Return:error or results
  */
int main(int argc, char *argv[])
{
int i, l;
if (argc > 1)
{
	for (i = 1; i < argc; i++)
{
	for (l = 2; l < argc; l++)
{
	i = atoi(argv[i]);
	l = atoi(argv[l]);
	printf("%d\n", (i * l));
	return (0);
}
}
}
	printf("Error\n");
	return (1);
}
