#include <stdio.h>

int main() {
    int Vetor[7];
    int I, X, Y, Soma;

    printf("Escreva os 7 elementos do vetor:\n");
    for (I = 0; I < 7; I++) {
        scanf("%i", &Vetor[I]);
    }

    printf("Indice 1: ");
    scanf("%i", &X);

    printf("Indice 2: ");
    scanf("%i", &Y);
    
    Soma = Vetor[X] + Vetor[Y];
    printf("%i\n", Soma);

    return 0;
}