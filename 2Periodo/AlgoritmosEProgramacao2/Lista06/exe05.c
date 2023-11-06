#include <stdio.h>

#define I 3
#define J 3

int main() {
	int X, Y, MatrizA[I][J], MatrizB[I][J], Resultado[I][J];
	
	srand(time(NULL));
	
	printf("Criando a matriz A:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			MatrizA[X][Y] = rand() % 100;
			printf("%i ", MatrizA[X][Y]);
		}
		printf("\n");
	}
	
	
	printf("\nCriando a matriz B:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			MatrizB[X][Y] = rand() % 100;
			printf("%i ", MatrizB[X][Y]);
		}
		printf("\n");
	}
	
	printf("\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			Resultado[X][Y] =  MatrizA[X][Y] + MatrizB[X][Y];
			printf("%i ", Resultado[X][Y]);
		}
		printf("\n");
	}
	
	return 0;
}
