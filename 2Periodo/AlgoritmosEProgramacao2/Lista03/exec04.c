#include <stdio.h>
#include <locale.h>
#define SIZE 10

int main() {
    setlocale(LC_ALL, "Portuguese");

    char Vetor[SIZE];
    int I, J, K;
    int Menor, PosicaoMenor, Auxiliar;

    printf("Informe os 10 caracteres:\n");
    for (I = 0; I < SIZE; I++) {
        scanf(" %c", &Vetor[I]);
    }

    for (I = 0; I < SIZE; I++) {
        for (J = SIZE - 1; J >= I; J--) {
            if (J == SIZE - 1) {
                Menor = Vetor[J];
                PosicaoMenor = J;
            }

            if (Menor > Vetor[J]) {
                Menor = Vetor[J];
                PosicaoMenor = J;
            }
        }
        
        Auxiliar = Vetor[I];
        Vetor[I] = Menor;
        Vetor[PosicaoMenor] = Auxiliar;
    }

    printf("Vetor Ordenado:\n");
    for (I = 0; I < SIZE; I++) {
        printf("%c ", Vetor[I]);
    }
    printf("\n");

    return 0;
}