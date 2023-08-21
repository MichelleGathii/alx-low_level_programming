#include <stdio.h>
/**
  *swap_int - swaps two integers
  *@a: integer 1 that is pointed to
  *@b: integer 2 that is pointed to
  *Return: void
  */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
