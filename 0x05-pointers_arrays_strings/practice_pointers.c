#include <stdio.h>
int main ()
{
	int a = 10;
	int *pa = &a;

	printf("It is %d \n", *pa);
	printf("Address is %p \n " , (void *)pa);
	return (0);

}

