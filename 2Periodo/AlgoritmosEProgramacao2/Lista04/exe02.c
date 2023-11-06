#include <stdio.h>
#include <ctype.h>

#define T 100
#define C 42

int main() {
    int I, J;
    char Consoantes[C] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z', 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    char Frase[T];

    printf("Digite uma frase para ser processada: ");
    scanf(" %[^\n]s", Frase);

    for (I = 0; Frase[I] != '\0'; I++) {
        for (J = 0; J < C; J++) {
            if (Frase[I] == Consoantes[J]) {
                Frase[I] = '@';
            }
        }
    }

    printf("%s\n", Frase);

    return 0;
}
