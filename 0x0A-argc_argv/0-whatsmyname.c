#include <stdio.h>
/**
 *main-prints nameof the program
 *@argc:holds number of argumetns
 *@argv:holds the string
 *
 *Return:integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}
