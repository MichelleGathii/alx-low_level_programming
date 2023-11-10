#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 * @a:integer 1 to swap
 * @b:integer 2 to swap
 * Return - void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;


}
