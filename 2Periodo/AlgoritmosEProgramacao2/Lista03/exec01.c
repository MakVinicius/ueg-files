#include <stdio.h>
#include <ctype.h>
#define SIZE 5

int main() {
    char Vetor[SIZE];
    int I;

    printf("Informe os 5 carateres:\n");
    for (I = 0; I < SIZE; I++) {
        // fflush(stdin);
        scanf(" %c", &Vetor[I]);
    }

    for (I = SIZE - 1; I >= 0; I--) {
        printf("%c", Vetor[I]);
    }
    printf("\n");

    return 0;
}