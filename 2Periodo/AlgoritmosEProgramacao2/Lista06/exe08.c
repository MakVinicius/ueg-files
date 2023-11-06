#include <stdio.h>

#define I 5
#define J 5

int main() {
	
	int X, Y, Matriz[I][J];
	int Auxiliar[I];
	
	srand(time(NULL));
	
	printf("Criando a matriz:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			Matriz[X][Y] = rand() % 100;
			printf("%i ", Matriz[X][Y]);
		}
		printf("\n");
	}
	
	for (Y = 0; Y < J; Y++) {
		Auxiliar[Y] = Matriz[1][Y];
		Matriz[1][Y] = Matriz[4][Y];
		Matriz[4][Y] = Auxiliar[Y];
	}
	
	printf("\nImprimindo primeira mudanca:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			printf("%i ", Matriz[X][Y]);
		}
		printf("\n");
	}
	printf("\n");
	
	for (X = 0; X < I; X++) {
		Auxiliar[X] = Matriz[X][0];
		Matriz[X][0] = Matriz[X][3];
		Matriz[X][3] = Auxiliar[X];
	}

	printf("\nImprimindo segunda mudanca:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			printf("%i ", Matriz[X][Y]);
		}
		printf("\n");
	}
	printf("\n");
	
		
	printf("\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			printf("%i ", Matriz[X][Y]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
