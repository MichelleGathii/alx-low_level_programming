#include <stdio.h>

void modif_my_char(char *cc , char ccc)
{
*cc = 'o';
ccc = 'l';

printf("After mod cc %p \n",cc);
printf("After mod ccc %c \n", ccc);
}
int main(void)
{
char c;
char *p;

p = &c;
c = 'H';
printf("Value of pointer %p\n", p);
printf("Before mod %c \n",c);
modif_my_char(p, c);
printf("After mod %p \n",p);
printf("After mod %c \n",c);

}
