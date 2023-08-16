#include <stdio.h>
/**
  *main - prints fibonacci numbers
  *Return: Always 0 (Success)
  */
int fibonacci(void);

int main(void)
{
	fibonacci();
	return (0);
}
/**
  *main - prints fibonacci numbers
  *
  */
int fibonacci(void)
{
	int i = 0;
	int sum = 0;

	while (i <= 25)
	{
		sum += i;
		printf("%d, ", sum);
		i++;
	}
	printf("\n");
return (sum);
}
