#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int Sorteado[6], Apostado[6];
    int I, J, Acertos = 0;

    printf("Números sorteados:\n");
    for (I = 0; I < 6; I++) {
        scanf("%i", &Sorteado[I]);
    }

    printf("Números apostados:\n");
    for (I = 0; I < 6; I++) {
        scanf("%i", &Apostado[I]);
    }

    for (I = 0; I < 6; I++) {
        for (J = 0; J < 6; J++) {
            if (Apostado[I] == Sorteado[J]) {
                Acertos++;
            }
        }
    }

    if (Acertos == 6) {
        printf("GANHOU!\n");
    } else if (Acertos == 0) {
        printf("NENHUM ACERTO!\n");
    } else {
        printf("Você acertou %i números\n", Acertos);
    }

    return 0;
}