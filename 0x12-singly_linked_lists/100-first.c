#include <stdio.h>
/**
  *print_string- prints the message intended
  *
  *Return:printed string
  */

void __attribute__((constructor)) print_string(void);

void print_string(void)
{
printf("You're beat! and yet, you must allow,\n"
		"
I bore my house upon my back!\n");
}
