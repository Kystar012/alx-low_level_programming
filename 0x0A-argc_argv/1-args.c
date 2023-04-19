#include <stdio.h>
/**
 *main-prints the number of arguments passed into it
 *@argc:number of arguments
 *@argv:string holder
 *
 *Return:number of arguments passed to main
 */
int main(int argc, char *argv[])
{
	(void) argv;

	{
	printf("%d\n", argc - 1);
	}
return (0);
}
