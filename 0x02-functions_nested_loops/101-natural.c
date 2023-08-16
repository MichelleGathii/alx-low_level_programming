#include <stdio.h>
/**
  * main - prints the sum of numbers divisible by 3 and 5
  * Return: sum
  *
  */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
			i++;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", sum);
	return (sum);
}
