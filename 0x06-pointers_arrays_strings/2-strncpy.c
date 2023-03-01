#include "main.h"
/**
  * _strncpy- copies a string
  *@dest:string to copy to
  *@src:string to copy from
  *@n:string length(no.elememts)
  *
  *Return:pointer dest.(success)
  */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
	l++;
	}
return (dest);
}

