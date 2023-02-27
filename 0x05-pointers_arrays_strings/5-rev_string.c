#include "main.h"
/**
 * rev_string- the functions reverses the string
 * @s:string to be reversed
 *
 * Return:0(success)-void
 */

void rev_string(char *s)
{
char rev = s[0];
int k = 0;
int i;
while (s[k] != '\0')
	k++;
for (i = 0; i < k; i++)
{
	k--;
	rev = s[i];
	s[i] = s[k];
	s[k] = rev;
}
}
