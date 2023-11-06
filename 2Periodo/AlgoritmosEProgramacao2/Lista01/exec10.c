#include <stdio.h>

int main() {
    int Vetor1[5], Vetor2[5], Vetor3[10];
    int I;

    printf("Digite os 5 elementos do primeiro vetor:\n");
    for (I = 0; I < 5; I++) {
        scanf("%i", &Vetor1[I]);
    }

    printf("Digite os 5 elementos do segundo vetor:\n");
    for (I = 0; I < 5; I++) {
        scanf("%i", &Vetor2[I]);
    }

    for (I = 0; I < 5; I++) {
        Vetor3[I * 2] = Vetor1[I];
        Vetor3[(I * 2) + 1] = Vetor2[I];

        // printf("%i ", Vetor3[I * 2]);
        // printf("%i ", Vetor3[(I * 2) + 1]);
    }

    for (I = 0; I < 10; I++) {
        printf("%i ", Vetor3[I]);
    }
    printf("\n");

    return 0;
}