#include <stdio.h>
#include "main.h"
/**
  *main - prints fibonacci numbers
  *Return: Always 0 (Success)
  */

int main(void)
{
	fibonacci();
	return (0);
}
/**
  *fibonacci - prints fibonacci numbers
  *Return: always 0 Succecc
  */
int fibonacci(void)
{
	long i = 1;
	long j = 2;
	long fib = 0;
	int n;

	printf("%ld, %ld, ", i, j);
	n = 0;
	while (n <= 48)
	{
		fib = i + j;
		printf("%ld", fib);
		if (n != 48)
			printf(", ");
		else
			printf("\n");
		i = j;
		j = fib;
	n++;
	}
	printf("\n");
return (0);
}
