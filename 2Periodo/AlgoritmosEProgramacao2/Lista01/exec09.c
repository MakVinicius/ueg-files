#include <stdio.h>

int main() {
    int Vetor[6], Acumulado[6];
    int I;

    for (I = 0; I < 6; I++) {
        if (I == 0) {
            scanf("%i", &Vetor[I]);
            Acumulado[I] = Vetor[I];
        } else {
            scanf("%i", &Vetor[I]);
            Acumulado[I] = Vetor[I] + Acumulado[I -1];
        }
    }

    for (I = 0; I < 6; I++) {
        printf("%i ", Acumulado[I]);
    }
    printf("\n");

    return 0;
}