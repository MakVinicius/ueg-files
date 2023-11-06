#include <stdio.h>

#define I 3
#define J 3

int main() {
	
	int Matriz[I][J], X, Y;
	int Flag = 0;
	
	srand(time(NULL));
	
	printf("Criando a matriz:\n");
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			Matriz[X][Y] = rand() % 100;
		}
	}
	
	for (X = 0; X < I; X++) {
		for (Y = 0; Y < J; Y++) {
			if (Matriz[X][Y] != Matriz[Y][X]) {
				Flag = 1;
			}
			printf("%i ", Matriz[X][Y]);
		}
		printf("\n");
	}
	
	if (Flag == 0) {
		printf("S");
	} else {
		printf("N");
	}
	
	return 0;
}
