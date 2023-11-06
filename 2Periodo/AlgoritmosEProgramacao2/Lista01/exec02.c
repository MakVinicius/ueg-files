#include <stdio.h>

int main() {
    int Vetor[10];
    int I; int Conteudo = 1;

    for (I = 0; I < 10; I++) {
        Vetor[I] = Conteudo;
        Conteudo += 2;
    }

    for (I = 0; I < 10; I++) {
        printf("%i ", Vetor[I]);
    }
    printf("\n");

    return 0;
}