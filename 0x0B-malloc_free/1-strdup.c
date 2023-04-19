#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  *_strdup-returns a pointer to newly allocatwe memory
  *@str:the string
  *
  *Return:pointer of duplicate string or null
  */
char *_strdup(char *str)
{
	char *newstr;
	int l, k = 0;

	if (str == NULL)

	return ('\0');
	l = 0;
	while (str[l] != '\0')
	l++;
	newstr = malloc((l + 1) * sizeof(char));

if (newstr == NULL)

	return ('\0');

for (k = 0; str[k]; k++)
{
	newstr[k] = str[k];
}
	return (newstr);
}
