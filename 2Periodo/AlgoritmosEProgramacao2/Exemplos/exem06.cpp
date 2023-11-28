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
//FUNÇÃO PRINCIPAL
int main()
{
int ValorA, ValorB;
setlocale(LC_ALL,"Portuguese");
printf("Digite dois números inteiros: ");
scanf("%d%d",&ValorA,&ValorB);
troca(&ValorA, &ValorB);
printf("Valores após passagem de parâmetro por Referência\n");
printf("ValorA: %d - ValorB: %d\n", ValorA,ValorB);
 system("Pause");
return 0;
}
