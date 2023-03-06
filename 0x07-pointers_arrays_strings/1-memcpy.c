#include "main.h"
/**
  *_memcpy- copies memory area from src to dest.
  *@dest:where area will be copied to
  *@src:area to be copied to dest.
  *@n:size of bytes to be copied
  *
  *Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l <= n; l++)
	{
		dest[l] = src[l];
	}
return (dest);
}
