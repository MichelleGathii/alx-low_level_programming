#include <stdio.h>
int main(void)
{
	char c;
	int i;
	char *pc;
	int *pi;

	c = 'x';
	i = 90;
	
	pc = &c;
	pi = &i;

	printf("Address %p\n", &c);
	printf("Value of pointer to c %p\n" , pc);
	printf("Address of i %p\n", &i);
	printf("Value of pointer to i %p\n" , pi);
	printf("Size of pointer %lu\n" , sizeof(pc));
	printf("Value of c before %c\n" , c);
	printf("Value of i before %d\n" , i);
	
	/* Derefrencing */
	*pc = 'H';
	*pi = 99;
	
	printf("Value of c after %c\n" , c);

	printf("Value of i after %d\n" , i);
	return (0);


}


