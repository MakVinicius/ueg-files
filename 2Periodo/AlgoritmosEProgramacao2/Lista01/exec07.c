#include <stdio.h>

int main() {
    int Vetor[50];
    int Temperatura[7];
    int I, J;

    for (I = 0; I < 7; I++) {
        scanf("%i", &Temperatura[I]);
    }

    for (I = 0; I < 7; I++) {

        if (I == 0) {
            printf("D: ");
        } else if (I == 1) {
            printf("S: ");
        } else if (I == 2) {
            printf("T: ");
        } else if (I == 3) {
            printf("Q: ");
        } else if (I == 4) {
            printf("Q: ");
        } else if (I == 5) {
            printf("S: ");
        } else if (I == 6) {
            printf("S: ");
        }

        for (J = 0; J < 50; J++) {
            if (J < Temperatura[I]) {
                printf("%c", 220);
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}