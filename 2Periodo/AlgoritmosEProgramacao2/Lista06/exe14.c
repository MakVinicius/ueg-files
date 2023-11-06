#include <stdio.h>

#define I 5
#define J 3

int main() {
	
	float Matriz[I][J], Media, Maior, Menor;
	int X, Y, IMaior, JMaior, IMenor, JMenor;
	
	for (X = 0; X < I; X++) {
        printf("Digite as notas da 1° e 2° VA do %i aluno:\n", X + 1);
		for (Y = 0; Y < J - 1; Y++) {
			scanf("%f", &Matriz[X][Y]);
		}
		Matriz[X][2] = Matriz[X][0] * 0.4 + Matriz[X][1] * 0.6;
	}
	
	Maior = Matriz[0][0];
	IMaior = 0; JMaior = 0;
	Menor = Matriz[0][1];
	IMenor = 0; JMenor = 1;
	
	for (X = 0; X < I; X++) {
		if (Maior < Matriz[X][0]) {
			Maior = Matriz[X][0];
			IMaior = X;
		}
		
		if (Menor > Matriz[X][1]) {
			Menor = Matriz[X][1];
			IMenor = X;
		}
	}
	
    printf("\nA matriz resultante é:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			printf("%.2f ", Matriz[X][Y]);
		}
		printf("\n");
	}
    printf("\n");

    printf("A maior nota da 1 VA está na linha %i e na coluna %i\n", IMaior, JMaior);
    printf("A menor nota da 2 VA está na linha %i e na coluna %i\n", IMenor, JMenor);
	
	return 0;
}