#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int Idades[10], Posicao[10];
    int I, IdadePessoa, J;

    printf("Informe as idades de 10 pessoas:\n");
    for (I = 0; I < 10; I++) {
        scanf("%i", &Idades[I]);
    }

    printf("Qual idade deve ser procurada: ");
    scanf("%i", &IdadePessoa);

    for (I = 0, J = 0; I < 10; I++) {
        if (Idades[I] == IdadePessoa) {
            Posicao[J] = I;
            J++;
        }
    }

    if (J == 0) {
        printf("Idade não encontrada!\n");
    } else {
        printf("Idade %i foi encontrada nas posições:\n", IdadePessoa);
        for (I = 0; I < J; I++) {
            printf("%i\n", Posicao[I]);
        }
        printf("\n");
    }

    return 0;
}