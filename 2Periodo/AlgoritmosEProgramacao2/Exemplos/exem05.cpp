#include <stdlib.h>
#include<stdio.h>
#include<locale.h>
int main()
{
int *p, *q, a, b, c;
setlocale(LC_ALL,"Portuguese");
printf("Digite dois numeros: \n");
scanf("%d %d", &a, &b);
p = &a;
q = &b;
c = *p + *q;
printf("Vari�vel a: %d \n Endere�o de mem�ria: %p \n", a, p);
printf("\n\nVari�vel b: %d \n Endere�o de mem�ria: %p \n", b, q);
printf("%i + %i: %i \n",*p, *q, c);
system("PAUSE");
return 0;
}
