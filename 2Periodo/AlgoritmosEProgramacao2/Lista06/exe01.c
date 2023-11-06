#include <stdio.h>

#define I 5
#define J 5

int main() {
	int X, Y, Matriz[I][J];
	
	printf("Criando a matriz:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			Matriz[X][Y] = X;
			printf("%i ", Matriz[X][Y]);
		}
		printf("\n");
	}
	
	return 0;
}
