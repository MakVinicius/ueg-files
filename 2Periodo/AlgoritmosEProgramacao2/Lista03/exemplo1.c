#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int I;

    printf("Gerando 5 valores aleatorios:\n\n");

    srand(time(NULL));

    for (I = 0; I < 5; I++) {
        printf("%d ", rand() % 100);
    }
    printf("\n");

    return 0;
}