#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int n = 0;
	int m;
	int o;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			o = n * m;
			if (o < 10)
			{
				_putchar(o + '0');
				if (m != 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				m++;
				}
				else
				{
				m++;	
				}
			}
			else
			{
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		m++;
		}
		_putchar('\n');
	n++;
	}
}
