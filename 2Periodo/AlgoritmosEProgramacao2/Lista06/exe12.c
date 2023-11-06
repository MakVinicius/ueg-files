#include <stdio.h>

#define I 3
#define J 6
#define T 18

int main() {
    int V[T], W[I][J];
    int X, Y, Z = 0;

    printf("Digite um vetor de %i elementos.\n", T);
    for (X = 0; X < T; X++) {
        scanf("%i", &V[X]);
    }

    printf("\n");
    for (X = 0; X < I; X++) {
        for (Y = 0; Y < J; Y++) {
            W[X][Y] = V[Z];
            Z++;
            printf("%i ", W[X][Y]);
        }
        printf("\n");
    }

    return 0;
}