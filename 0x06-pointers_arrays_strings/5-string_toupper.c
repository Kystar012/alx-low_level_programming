#include "main.h"
/**
  * string_toupper-changes lowercase string to uppercase
  *@n: pointer string to be converted to uppercase
  *8
  *Return:char (success)
  */
char *string_toupper(char *n)
{
	int l = 0;

	while (n[l] != '\0')
	{
		if (n[l] >= 'a' && n[l] <= 'z')
			n[l] = n[l] - 32;
		l++;
	}
	return (n);
}
