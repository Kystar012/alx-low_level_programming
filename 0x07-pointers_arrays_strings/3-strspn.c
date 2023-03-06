#include "main.h"
/**
  *_strspn-gets the length of a substring
  *@s:string to be searched
  *@accept:prefix to be measured
  *
  *Return: The number of bytes in s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int l;
	unsigned int k = 0;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
	{
			k++;
			break;
	}
	else if (accept[l + 1] == '\0')
	return (k);
	}
s++;
	}
	return (k);
}
