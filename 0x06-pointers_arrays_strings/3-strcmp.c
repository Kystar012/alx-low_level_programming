#include "main.h"
/**
  * _strcmp-compares two strings s1 and s2
  *@s1:string to compare
  *@s2:string to compare with s1
  *
  *Return: 0 (success)
  */
int _strcmp(char *s1, char *s2)
{
	int l = 0;

	while (s1[l] != '\0' && s2[l] != '\0')
	{
		if (s1[l] != s2[l])
		{
			return (s1[l] - s2[l]);
		}
		l++;
	}
	return (0);
}
