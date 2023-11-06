#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int Numeros[8];
    int Menor, Maior, I, PosicaoMaior, PosicaoMenor;

    for (I = 0; I < 8; I++) {
        printf("%i° Número: ", I + 1);
        scanf("%i", &Numeros[I]);
        
        if (I == 0) {
            Maior = Numeros[I];
            Menor = Numeros[I];
            PosicaoMaior = 0;
            PosicaoMenor = 0;
        } else {
            if (Maior <= Numeros[I]) {
                Maior = Numeros[I];
                PosicaoMaior = I;
            }

            if (Menor >= Numeros[I]) {
                Menor = Numeros[I];
                PosicaoMenor = I;
            }
        }
    }

    printf("Posição do maior elemento: %i\n", PosicaoMaior);
    printf("Menor elemento: %i\n", Menor);
    printf("Posição do menor elemento: %i\n", PosicaoMenor);

    return 0;
}