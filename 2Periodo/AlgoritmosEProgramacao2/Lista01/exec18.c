#include <stdio.h>

int main() {
    int VetorA[10], VetorB[10];
    int I;

    printf("Vetor lido:\n");
    for (I = 0; I < 10; I++) {
        scanf("%i", &VetorA[I]);
        VetorB[I] = VetorA[I] * VetorA[I];
    }

    printf("Vetor calculado:\n");
    for (I = 0; I < 10; I++) {
        printf("%i\n", VetorB[I]);
    }

    return 0;
}