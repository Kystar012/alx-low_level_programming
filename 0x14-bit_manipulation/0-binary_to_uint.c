#include "main.h"
/**
  *binary_to_unit- changes number from binary to unit
  *@b:pointer to string of numbers
  *
  *Return:converted number(success) or 0 on filure
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
    {
	    return 0;
    }
	for (i = 0; b[i] != '\0'; i++)
    {
	    if (b[i] != '0' && b[i] != '1')
	{
		return 0;
	}
	result = (result << 1) + (b[i] - '0');
    }
    return result;
}
