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
printf("Variável a: %d \n Endereço de memória: %p \n", a, p);
printf("\n\nVariável b: %d \n Endereço de memória: %p \n", b, q);
printf("%i + %i: %i \n",*p, *q, c);
system("PAUSE");
return 0;
}
