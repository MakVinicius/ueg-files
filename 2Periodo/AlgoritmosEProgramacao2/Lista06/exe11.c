#include <stdio.h>

#define I 4
#define J 5

int main() {

    int X, Y;
    int MAT[I][J], Total = 0;
    int SomaLinha[I] = {0, 0, 0, 0};

    printf("Digite os %i elementos do vetor a seguir:\n", (I * J));
    for (X = 0; X < I; X++) {
        for (Y = 0; Y < J; Y++) {
            scanf("%i", &MAT[X][Y]);
            SomaLinha[X] = SomaLinha[X] + MAT[X][Y];
        }
        Total = Total + SomaLinha[X];
    }

    printf("\nVetor SomaLinha: ");
    for (X = 0; X < I; X++) {
        printf("%i ", SomaLinha[X]);
    }
    printf("\n");

    printf("Total da soma é: %i\n", Total);

    return 0;
}