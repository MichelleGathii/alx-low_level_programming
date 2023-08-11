#include <stdio.h>
/**
  *main - prints the alphabet except q and e
  *Return: Always 0 (Success)
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
		else 
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
