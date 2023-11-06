#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int Candidatos, I, J, K = 0, Flag = 0;
    int Maior;

    printf("Quantos candidadtos se inscreveram: ");
    scanf("%i", &Candidatos);

    int Vetor[Candidatos];
    int Vencedores[Candidatos];
    int PosicaoVencedores[Candidatos];

    for (I = 0; I < Candidatos; I++) {
        printf("Voto Candidato%i: ", I + 1);
        scanf("%i", &Vetor[I]);
    }

    for (I = 0; I < Candidatos; I++) {
        if (I == 0) {
            Maior = Vetor[I];
        }

        if (Maior < Vetor[I]) {
            Maior = Vetor[I];
        }
    }

    for (I = 0; I < Candidatos; I++) {
        if (Vetor[I] == Maior) {
            Vencedores[K] = I;
            K++;
        }
    }

    if (Vencedores[0] != 0) {
        Flag = 1;
    } else {
        Flag = 0;
    }

    if (Flag == 0) {
        printf("Carlos foi eleito: SIM\n");
    
    } else {
        printf("Carlos foi eleito: NÃO\n");
    }

    return 0;
}