#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int Vetor[8];
    int I;
    int X = 0; int Y = 0;
    int Soma = 0;

    printf("Informe os 8 números:\n");
    for (I = 0; I < 8; I++) {
        scanf("%i", &Vetor[I]);
    }

    do {
        if (X >= 8 || X < 0) {
            printf("Erro! Posição inválida.\n");
        }
        printf("Informe a 1a posição do vetor: ");
        scanf("%i", &X);
    } while (X >= 8 || X < 0);

    do {
        if (Y >= 8 || Y < 0) {
            printf("Erro! Posição inválida.\n");
        }
        printf("Informe a 2a posição do vetor: ");
        scanf("%i", &Y);
    } while (Y >= 8 || Y < 0);
    
    Soma = Vetor[X] + Vetor[Y];
    printf("A soma do conteúdo das posições informadas é: %i\n", Soma);

    return 0;
}