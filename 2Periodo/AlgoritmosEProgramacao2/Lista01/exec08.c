#include <stdio.h>

int main() {
    int Vetor[10];
    int I;

    for (I = 0; I < 10; I++) {
        scanf("%i", &Vetor[I]);
        
        if (Vetor[I] < 0) {
            Vetor[I] = 0;
        }
    }

    for (I = 0; I < 10; I++) {
        printf("%i ", Vetor[I]);
    }
    printf("\n");

    return 0;
}