#include <stdio.h>

int main() {
    int VetorA[10], VetorB[10], VetorC[10];
    int I;

    printf("Vetor A:\n");
    for (I = 0; I < 10; I++) {
        scanf("%i", &VetorA[I]);
    }

    printf("Vetor B:\n");
    for (I = 0; I < 10; I++) {
        scanf("%i", &VetorB[I]);
    }

    printf("Vetor resultante: ");
    for (I = 0; I < 10; I++) {
        VetorC[I] = VetorA[I] + VetorB[I];
        printf("%i ", VetorC[I]);
    }
    printf("\n");

    return 0;
}