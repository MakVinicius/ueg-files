#include <stdio.h>

#define I 5
#define J 5

int main() {
	int X, Y, Matriz[I][J];
	
	printf("Criando a matriz:\n");
	for (Y = 0; Y < J; Y++) {
		for (X = 0; X < I; X++) {
			Matriz[X][Y] = X;
			printf("%i ", Matriz[X][Y]);
		}
		printf("\n");
	}
	
	return 0;
}
