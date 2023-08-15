#include "main.h"
/**
 * print_last_digit - check the code
 * @i: number to be checked for lastdigit
 * Return: the last digit
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
