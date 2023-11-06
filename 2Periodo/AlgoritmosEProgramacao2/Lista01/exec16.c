#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int Vetor[10];
    int I = 0, J, K = 0, Flag;

    printf("Informe os 10 números:\n");
    scanf("%i", &Vetor[I]);
    I++; K++;

    do {
        Flag = 0;
        scanf("%i", &Vetor[I]);

        for (J = 0; J < K; J++) {
            if (Vetor[J] == Vetor[I]) {
                Flag++;
            }
        }

        if (Flag == 0) {
            I++; K++;
        } else {
            printf("Erro! O número %i já existe no vetor.\n", Vetor[I]);
        }

    } while (I < 10);

    printf("Vetor final:\n");
    for (I = 0; I < 10; I++) {
        printf("%i ", Vetor[I]);
    }
    printf("\n");

    return 0;
}