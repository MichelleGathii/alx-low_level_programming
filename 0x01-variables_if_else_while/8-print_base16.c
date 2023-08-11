#include<stdio.h>
/**
  *main - entry point. The function prints numbers of base 9
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
return (0);
}
