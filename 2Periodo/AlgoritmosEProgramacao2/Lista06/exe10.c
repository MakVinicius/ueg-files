#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define I 10
#define J 10

int main() {
    int X, Y, Matriz[I][J], Maiores[I], Menores[J];
    int Maior, Menor;

    srand(time(NULL));

    for (X = 0; X < I; X++) {
        for (Y = 0; Y < J; Y++) {
            Matriz[X][Y] = rand() % 100;
        }
    }

    Maior = Matriz[0][0];
    Menor = Matriz[0][0];

    for (X = 0; X < I; X++) {
        for (Y = 0; Y < J; Y++) {
            if (Maior < Matriz[X][Y]) {
                Maior = Matriz[X][Y];
            }
        }
        Maiores[X] = Maior;
        Maior = Matriz[X][0];
    }

    for (Y = 0; Y < J; Y++) {
        for (X = 0; X < I; X++) {
            if (Menor > Matriz[X][Y]) {
                Menor = Matriz[X][Y];
            }
        }
        Menores[Y] = Menor;
        Menor = Matriz[0][Y];
    }

    printf("\nVetor original:\n");
    for (X = 0; X < I; X++) {
        for (Y = 0; Y < J; Y++) {
            printf("%i ", Matriz[X][Y]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Vetor dos maiores numeros das linhas: ");
    for (X = 0; X < I; X++) {
        printf("%i ", Maiores[X]);
    }
    printf("\n");

    printf("Vetor dos menores numeros das colunas: ");
    for (X = 0; X < I; X++) {
        printf("%i ", Menores[X]);
    }
    printf("\n");

    return 0;
}
