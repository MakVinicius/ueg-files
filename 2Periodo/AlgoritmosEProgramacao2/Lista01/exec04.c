#include <stdio.h>

int main() {
    int Vetor[20];
    int I;

    for (I = 0; I < 20; I++) {
        if (I < 10) {
            Vetor[I] = 0;
        } else {
            Vetor[I] = 1;
        }
    }

    for (I = 0; I < 20; I++) {
        printf("%i ", Vetor[I]);
    }
    printf("\n");
    
    return 0;
}