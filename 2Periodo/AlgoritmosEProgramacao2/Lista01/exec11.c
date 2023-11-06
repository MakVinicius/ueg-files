#include <stdio.h>

int main() {
    int VetorA[10], VetorB[10];
    int I, J;

    for (I = 0, J = 0; I < 10; I++) {
        scanf("%i", &VetorA[I]);

        if (VetorA[I] > 0) {
            VetorB[J] = VetorA[I];
            J++;
        }
    }

    for (I = 0; I < J; I++) {
        printf("%i ", VetorB[I]);
    }
    printf("\n");

    return 0;
}