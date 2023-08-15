#include "main.h"
/**
  * main - runs the program
  * Return: Always 0 (Success)
  */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
  * print_alphabet - prints alphabet in lowercase
  * Return: void
  */
void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
}
