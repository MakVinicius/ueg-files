#include <stdio.h>

int main() {
    int Vetor[24];
    int I;

    for (I = 0; I < 24; I++) {
        if (I % 2 == 0) {
            Vetor[I] = 2;
        } else {
            Vetor[I] = 1;
        }
    }

    for (I = 0; I < 24; I++) {
        printf("%i ", Vetor[I]);
    }
    printf("\n");

    return 0;
}