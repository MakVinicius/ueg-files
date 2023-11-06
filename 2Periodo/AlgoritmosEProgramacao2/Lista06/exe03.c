#include <stdio.h>

#define I 3
#define J 3

int main() {
	int X, Y, Matriz[I][J];
	
	srand(time(NULL));
	
	printf("Criando a matriz:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			Matriz[X][Y] = rand() % 100;
			printf("%i ", Matriz[X][Y]);
		}
		printf("\n");
	}
	
	printf("\nImprimindo a diagonal:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			if (X == Y) {
				printf("%i ", Matriz[X][Y]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
