#include <stdio.h>
/**
  *print_string- prints the message intended
  *
  *Return:printed string
  */

void print_string(void) __attribute__((constructor));

void print_string(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house
		upon my back!\n");
}
