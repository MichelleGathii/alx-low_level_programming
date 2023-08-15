#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int l = 0;
	l = i % 10;
	if (l < 0)
		l *= -1;
	else
		l = l;
	_putchar(l + 48);
	return (l);
}
