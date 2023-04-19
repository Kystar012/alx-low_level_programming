#include "function_pointers.h"
/**
  *print_name-prints a name
  *@f:a void function pointer passed as an argument
  *@name:name to be printed
  *
  *Return:void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
