#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int Vetor[8];
    int I, X, Y, Auxiliar;

    printf("Informe os 8 números:\n");
    for (I = 0; I < 8; I++) {
        scanf("%i", &Vetor[I]);
    }

    printf("Posição do 1° elemento para troca: ");
    do {
        scanf("%i", &X);
        
        if (X < 0 || X >= 8) {
            printf("Número inválido! Deve ser entre 0 e 9.\n");
        }
    } while (X < 0 || X >= 8);

    printf("Posição do 2° elemento para troca: ");
    do {
        scanf("%i", &Y);

        if (Y < 0 || Y >= 8) {
            printf("Número inválido! Deve ser entre 0 e 9.\n");
        }
    } while (Y < 0 || Y >= 8);

    Auxiliar = Vetor[X];
    Vetor[X] = Vetor[Y];
    Vetor[Y] = Auxiliar;

    printf("Vetor após a troca:\n");
    for (I = 0; I < 8; I++) {
        printf("%i ", Vetor[I]);
    }
    printf("\n");

    return 0;
}