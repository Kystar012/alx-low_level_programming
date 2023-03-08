#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
        int n =0;                                                    char *str = s;                                                                                            while (str[n] != '\0')
{
                        _putchar(s[n]);
                        _putchar('\n');              }                                                    n++;                                                 }
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
