#include <stdio.h>
/**
  *main - prints all possible combinations of two numbers without repetition
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		j++;
		}
	i++;
	}
	return (0);
}

