#include "main.h"
/**
  * _strncat- concatenate two strings
  *@dest:string to cat
  *@src: string to cat
  *@n:string length
  *
  *Return:result(success)
  */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0, m = 0;
while (dest[l] != '\0')
{
	l++;
}
	while (src[m] != '\0' && m < n)
{
	dest[l] = src[m];
l++;
m++;
}
dest[l] = '\0';
return (dest);
}
