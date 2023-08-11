#include <stdio.h>
/**
  *main - entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);
		i++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
