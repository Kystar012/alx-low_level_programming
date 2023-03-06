#include "main.h"
/**
  *_strpbrk-searches a string for any set of bytes
  *@s:string to be seached
  *@accept:The set of bytes to be searched for
  *
  *Return:If a set matched -a pointer or if  not mathed a NULL
  */
char *_strpbrk(char *s, char *accept)
{
int l;

while (*s)
{
	for (l = 0; accept[l]; l++)
	{
		if (*s == accept[l])
			return (s);
	}
	s++;
}
return ('\0');
}
