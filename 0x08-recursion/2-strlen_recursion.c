#include "main.h"
/**
  *_strlen_recursion-returns the string length
  *@s:string
  *
  *Return:length of a string
  */
int _strlen_recursion(char *s)
{
	int n = 0; /* @n: is the strong length */

	if (*s)
	{
		n = _strlen_recursion(s + 1);
	return (n = _strlen_recursion(s + 1));
	}
return (0);
}
