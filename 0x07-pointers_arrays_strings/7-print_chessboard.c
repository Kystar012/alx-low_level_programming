#include "main.h"
/**
  *print_chessboard- prints the chessboard
  *@a:string to be printed
  *
  *Return:void-0
  */
void print_chessboard(char (*a)[8])
{
	int l, j;

	for (l = 0; a[l][7]; l++)
	{
		for (j = 0; j < 8; j++)

			_putchar(a[l][j]);
	}
			_putchar('\n');
}
