#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void troca(int *PonteiroA, int *PonteiroB)
{
int Aux;
Aux = *PonteiroA;
*PonteiroA = *PonteiroB;
*PonteiroB = Aux;
}
//FUN��O PRINCIPAL
int main()
{
int ValorA, ValorB;
setlocale(LC_ALL,"Portuguese");
printf("Digite dois n�meros inteiros: ");
scanf("%d%d",&ValorA,&ValorB);
troca(&ValorA, &ValorB);
printf("Valores ap�s passagem de par�metro por Refer�ncia\n");
printf("ValorA: %d - ValorB: %d\n", ValorA,ValorB);
 system("Pause");
return 0;
}
