#include "main.h"
/**
  * print_alphabet_x10 - prints  a - z 10times
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	char l = 'a';
	int i =0;
	
	while (i <= 10)
	{
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		i++;
	}
	_putchar('\n');
}
