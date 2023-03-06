#include "main.h"
/**
  *_strchr-locates a character in a string
  *@s:string
  *@c:character to be located
  *
  *Returns:a pointer(success) or  NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	int l;
char *strng = s, value = c;

for (l = 0; strng[l] >= '\0'; l++)
	{
	if (strng[l] == value)
		return (strng + l);
	}
		return ('\0');
}
