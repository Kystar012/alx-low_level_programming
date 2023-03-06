#include "main.h"
/**
  *_strstr-locates a substring
  *@haystack: string to be searched
  *@needle:substring we are seaeching for
  *
  *Return: If found -a pointer to the first occurence if not -NULL
  */
char *_strstr(char *haystack, char *needle)
{
int l;

if (*needle == 0)
	return (haystack);
while (*haystack)
{
	l = 0;
	if (haystack[l] == needle[l])
	{
		do
		{
			if (needle[l + 1] == '\0')
				return (haystack);
			l++;
		}
		while (haystack[l] == needle[l]);
	}
haystack++;
}
return ('\0');
}
