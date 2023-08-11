#include <stdio.h>
/**
  *main - prints numbers from 0 to 9 using putchar function
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
return (0);
}
