#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 *@n:  the number to be checked
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n <= 98)
{
	while (n <= 98)
	{
		if (n == 98)
		{
		printf("%d\n", n);
		break;
		}
		else
		{
		printf("%d, ", n);
		}
	n++;
	}
}
else
{
	while (n >= 98)
	{
		if (n == 98)
		{
		printf("%d\n", n);
		break;
		}
		else
		{
		printf("%d, ", n);
		}
	n--;
	}
}
}
