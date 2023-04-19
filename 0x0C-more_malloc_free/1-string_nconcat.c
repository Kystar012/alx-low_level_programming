#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat-concatenates two strings
  *@s1:string one
  *@s2:string two
  *@n:number of elements to cat from string two
  *
  *Return:concatenated s1 and 2 on success or NULL if it fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *strcat;/*sting contains both s1 and s2*/

	if (s1 == NULL)
	s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (index = 0; s1[index]; index++)
		len++;
	strcat = malloc(sizeof(char) * (len + 1));
	if (strcat == NULL)
		return ('\0');
	len = 0;
	for (index = 0; s1[index]; index++)
		strcat[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		strcat[len++] = s2[index];
	strcat[len] = '\0';
	return (strcat);
}
