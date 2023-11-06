#include <stdio.h>

int main() {
    float Vetor[8], Aux[8];
    int I;

    for (I = 0; I < 8; I++) {
        scanf("%f", &Vetor[I]);
        Aux[I] = Vetor[I];
    }
    
    for (I = 0; I < 8; I++) {
        if (I <= 3) {
            Vetor[I] = Aux[I + 4];
        } else {
            Vetor[I] = Aux[I - 4];
        }
    }

    for (I = 0; I < 8; I++) {
        printf("%.2f ", Vetor[I]);
    }
    printf("\n");

    return 0;
}