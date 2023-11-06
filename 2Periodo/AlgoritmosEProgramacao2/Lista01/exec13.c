#include <stdio.h>

int main() {
    int Vetor[20];
    int I;

    for (I = 1; I <= 20; I++) {
        Vetor[I - 1] = I * 5;
        printf("%i ", Vetor[I - 1]);
    }
    printf("\n");

    return 0;
}
