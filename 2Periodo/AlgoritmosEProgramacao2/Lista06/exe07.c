#include <stdio.h>

#define I 5
#define J 6

int main() {
	
	int X, Y, Matriz[I][J];
	int Soma = 0, Linhas[I], Colunas[J];
	
	
	srand(time(NULL));
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			Matriz[X][Y] = rand() % 100;
			printf("%i ", Matriz[X][Y]);
		}
		printf("\n");
	}
	
	printf("\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			Soma = Soma + Matriz[X][Y];
		}
		Linhas[X] = Soma;
		Soma = 0;
	}
	
	Soma = 0;
	for (Y = 0; Y < J; Y++) {
		for (X = 0; X < I; X++) {
			Soma = Soma + Matriz[X][Y];
		}
		Colunas[Y] = Soma;
		Soma = 0;
	}
	
	for (X = 0; X < I; X++) {
		printf("%i ", Linhas[X]);
	}
	printf("\n");
	
	for (Y = 0; Y < J; Y++) {
		printf("%i ", Colunas[Y]);
	}
	printf("\n");
	
	return 0;
}
