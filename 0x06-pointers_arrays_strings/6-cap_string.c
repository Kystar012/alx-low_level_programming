#include "main.h"
/**
  * cap_string-To capitalize qll words of a string
  *@str:string to capitalize
  *Return:n (success)
  */
char *cap_string(char *str)
{
	int l = 0;

	while (str[l])
	{
	while (!(str[l] >= 'a' && str[l] <= 'z'))
		l++;
	if (str[l - 1] == ' ' ||
	str[l - 1] == (',', '.', ';', '!', '?', '"', '(', ')', '{', '}', '\n', '\t')
	|| l == 0)
		str[l] -= 32;
	l++;
	}
	return (str);
}
