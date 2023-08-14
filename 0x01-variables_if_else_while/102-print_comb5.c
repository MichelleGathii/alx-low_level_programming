#include <stdio.h>
/**
  *main - Prints a combination of 4 numbeers
  *
  *Return: Always 0 (Success)
  **/
int main(void)
{
	int i = 0;
	int j = 0;
		while (i <= 99)
		{
			j = i + 1;
			while (j <= 99)
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
				putchar(' ');
				putchar('0' + j / 10);
				putchar('0' + j % 10);
					if (i != 98 || j != 99)
					{
						putchar(',');
						putchar(' ');
					}
					j++;
			}
			i++;
		}
		putchar('\n');
		return (0);
}

