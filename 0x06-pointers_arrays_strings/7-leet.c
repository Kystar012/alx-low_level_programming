#include "main.h"
/**
  * leet- Encodes a string into 1337
  *@n:string pointer
  *
  *Return: n(success)
  */
char *leet(char *n)
{
	int l, m;
	char str1[] = "AaEaOoTtLl";
	char str2[] = "4433007711";

	for (l = 0; n[l] != '\0'; l++)
{
	for (m = 0; m < 10; m++)
	{
		if (n[l] == str1[m])
		{
			n[l] = str2[m];
		}
	}
}
	return (n);
}
