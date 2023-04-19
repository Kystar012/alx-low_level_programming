#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *str_concat-concatenates two strings
  *@s1:string one
  *@s2:string two to cat
  *
  *Return:a pointer pf s1 and s2 on success or NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int j = 0, l = 0, k = 0, m = 0;
while (s1 && s1[j])
	j++;
while (s2 && s2[l])
	l++;
s3 = malloc((j + l + 1) * sizeof(char));

if (s3 == NULL)
	return ('\0');
if (s1)
{
	while (k < j)
{
	s3[k] = s1[k];
	k++;
}}
if (s2)
{
	while (k < (j + l))
{
	s3[k] = s2[m];
	k++;
	m++;
}
}
	s3[k] = '\0';
return (s3);
}
