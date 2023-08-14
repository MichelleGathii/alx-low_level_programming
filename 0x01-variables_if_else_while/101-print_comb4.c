#include<stdio.h>
/**
  *main - prints combinations of three numbers without repetition
  *Return: Always 0 (Success)
  **/
int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i == 7 && j == 8 && k == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;

	}
	return (0);
}

