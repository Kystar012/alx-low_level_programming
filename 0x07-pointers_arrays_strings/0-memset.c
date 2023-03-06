#include "main.h"
/**
  * _memset- fills memory with constant byte
  *@s:pointer of the memory adddress
  *@b:constant byte to fill the memory
  *@n:memory area size
  *
  *Return:a pointer to the  memory
  */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int l;
char *marea = s, value = b;

for (l = 0; l < n; l++)
{
	marea[l] = value;
}
	return (marea);
}
