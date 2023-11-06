#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int Vetor[10], Iguais[5];
    int I, J, K = 0;

    printf("Informe os 10 números:\n");
    for (I = 0, J = 0; I < 10; I++) {
        scanf("%i", &Vetor[I]);
    }

    for (I = 0; I < 10; I++) {
        for (J = 9; J > I; J--) {
            if (Vetor[I] == Vetor[J]) {
                Iguais[K] = Vetor[I];
                K++;
            }
        }
    }

    if (K == 0) {
        printf("Não existem valores iguais.\n");
    } else {
        printf("Números informados mais de uma vez:\n");
        for (I = 0; I < K; I++) {
            printf("%i\n", Iguais[I]);
        }
    }

    return 0;
}
