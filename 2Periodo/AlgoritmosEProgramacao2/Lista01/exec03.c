#include <stdio.h>
#include <math.h>

int main() {
    double Vetor[5];
    int I;

    for (I = 0; I < 5; I++) {
        Vetor[I] = pow(I, 3);
    }

    for (I = 0; I < 5; I++) {
        printf("%.0f ", Vetor[I]);
    }
    printf("\n");

    return 0;
}