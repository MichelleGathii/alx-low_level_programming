#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j = 1;

while (j <= 10)
{
	i = 0;
	while (i <= 14)
	{
		if (i <= 9)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	i++;
	}
	_putchar('\n');
	j++;
}

}
