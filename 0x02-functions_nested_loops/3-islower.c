#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c:charater to check if it islowercase
 *
 * Return: 0 if a lowercase && 1 if not
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
