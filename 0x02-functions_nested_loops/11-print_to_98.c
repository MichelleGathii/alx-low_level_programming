#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n < 98)
	{	
		if (n == 98)
		{
		_putchar(n + '0');
		}
		else
		{
		_putchar(n + '0');
		n++;
		}
	}
	while (n > 98)
	{
		if (n == 98)
		{
		_putchar(n + '0');
		}
		else
		{
		_putchar(n + '0');
		n--;
		}
	}
}
