#include "main.h"
/**
  * _strcat-concatenates two strings
  *@dest: string to cat
  *@src: string to cat
  *Return: 0(succes)
  */
char *_strcat(char *dest, char *src)
{
char *str3;
int a = 0, b = 0;
while (dest[a] != '\0')
{
	str3[b] = dest[a];
	a++;
	b++;
}
while (src[a] != '\0')
{
	str3[b] = src[a];
	a++;
	b++;
}
str3[b] = '\0';

return (str3);
}
