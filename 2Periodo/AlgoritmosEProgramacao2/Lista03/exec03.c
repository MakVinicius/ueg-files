#include <stdio.h>
#include <ctype.h>
#define SIZE 13

int main() {
    char NomeEmail[SIZE] = {'R', 'u', 'i', ' ', 'D', 'i', 'a', 's', ' ', 'R', 'e', 'i', 's'};
    int I;

    printf("Vetor original:\n");
    for (I = 0; I < SIZE; I++) {
        printf("%c", NomeEmail[I]);
    }
    printf("\n");

    for (I = 0; I < SIZE; I++) {
        if (isupper(NomeEmail[I]) != 0) {
            NomeEmail[I] = tolower(NomeEmail[I]);
        } else if (isspace(NomeEmail[I]) != 0) {
            NomeEmail[I] = '_';
        }
    }

    printf("Vetor modificado:\n");
    for (I = 0; I < SIZE; I++) {
        printf("%c", NomeEmail[I]);
    }
    printf("\n");

    return 0;
}
