#include <stdio.h>
/**
* main - Entry point
*
* Return: 0(Success)
*/
int main(void)
{
int i;
char c;
long int li;
long long int lli;
float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
		return (0);
}
