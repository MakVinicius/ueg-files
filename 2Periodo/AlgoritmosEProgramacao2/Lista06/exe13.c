#include <stdio.h>

#define I 3
#define J 3

int main() {
    int Matriz[I][J], X, Y;
    int IMaior, JMaior, IMenor, JMenor, Maior, Menor;

    printf("Digite a matriz %i x %i a seguir:\n", I, J);
    for (X = 0; X < I; X++) {
        scanf("%i %i %i", &Matriz[X][0], &Matriz[X][1], &Matriz[X][2]);
    }

    Maior = Matriz[0][0]; IMaior = 0; JMaior = 0;
    Menor = Matriz[0][0]; IMenor = 0; JMenor = 0;

    for (X = 0; X < I; X++) {
        for (Y = 0; Y < J; Y++) {
            if (Maior < Matriz[X][Y]) {
                Maior = Matriz[X][Y];
                IMaior = X; JMaior = Y;
            }

            if (Menor > Matriz[X][Y]) {
                Menor = Matriz[X][Y];
                IMenor = X; JMenor = Y;
            }
        }
    }

    printf("\nA matriz digitada é a seguinte:\n");
    for (X = 0; X < I; X++) {
        for (Y = 0; Y < J; Y++) {
            printf("%i ", Matriz[X][Y]);
        }
        printf("\n");
    }

    printf("O maior valor está na linha %i e na coluna %i\n", IMaior, JMaior);
    printf("O menor valor está na linha %i e na coluna %i\n", IMenor, JMenor);

    return 0;
}