#include <stdio.h>
#include <ctype.h>
#define SIZE 10

int main() {
    char Vetor[SIZE];
    char Auxiliar;
    int I;

    printf("Informe os 10 carateres:\n");
    for (I = 0; I < SIZE; I++) {
        // fflush(stdin);
        scanf(" %c", &Vetor[I]);
    }

    for (I = 0; I < SIZE; I++) {
        if (I % 2 == 0) {
            Auxiliar = Vetor[I];
        } else {
            Vetor[I - 1] = Vetor[I];
            Vetor[I] = Auxiliar;
        }
    }

    printf("Imprimindo caracteres:\n");
    for (I = 0; I < SIZE; I++) {
        printf("%c", Vetor[I]);
    }
    printf("\n");

    return 0;
}