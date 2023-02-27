#include "main.h"
/**
 * _strcpy-copies string of char from source to destination
 * @dest:where string to be cioied to
 * @src:source of str to be copied
 *
 * Return: 0(success)
 */

char *_strcpy(char *dest, char *src)
{
	int length;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
	length++;
}
*(dest + length) = '\0';
return (dest);
}
