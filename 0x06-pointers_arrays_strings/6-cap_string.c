#include "main.h"
/**
  * cap_string-To capitalize qll words of a string
  *@str:string to capitalize
  *
  *Return:n (success)
  */
char *cap_string(char *n)
{
	int l = 0;

	while (str[l])
	{
	while (!(n[l] >= 'a' && n[l] <= 'z'))
		l++;
	if (str[l - 1] == ' ' ||
			str[l - 1] == ',' ||
			str[l - 1] == '.' ||
			str[l - 1] == ';' ||
			str[l - 1] == '!' ||
			str[l - 1] == '?' ||
			str[l - 1] == '"' ||
			str[l - 1] == '(' ||
			str[l - 1] == ')' ||
			str[l - 1] == '{' ||
			str[l - 1] == '}' || 
			str[l - 1] == '\n' ||
			str[l - 1] == '\t' ||
			l == 0)
		str[l] -= 32;
	l++;
	}
	return (str);
}
