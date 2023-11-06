#include <stdio.h>
#include <ctype.h>

#define TAMANHO 100

int main() {
    int I;
    char Frase[TAMANHO];

    printf("Digite uma frase para ser processada: ");
    scanf(" %[^\n]s", Frase);

    for (I = 0; I < TAMANHO; I++) {
        Frase[I] = toupper(Frase[I]);

        if (Frase[I] == 'A' || Frase[I] == 'E' || Frase[I] == 'I' || Frase[I] == 'O' || Frase[I] == 'U') {
            Frase[I] = '*';
        }
    }

    printf("%s\n", Frase);

    return 0;
}
