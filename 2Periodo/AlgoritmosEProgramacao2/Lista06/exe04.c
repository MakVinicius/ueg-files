#include <stdio.h>

#define I 3
#define J 5

int main() {
	int X, Y, Matriz[I][J], Coluna;
	
	printf("\nDigite os 5 digitos de cada linha da matriz:\n");
	for (X = 0; X < I; X++) {
		scanf("%i %i %i %i %i", &Matriz[X][0], &Matriz[X][1], &Matriz[X][2], &Matriz[X][3], &Matriz[X][4]);
	}
	
	printf("Digite o indice da coluna que deseja imprimir:\n");
	scanf("%i", &Coluna);
	
	if (Coluna >= J || Coluna < 0) {
		printf("Coluna invalida!\n");
	} else {
		for (X = 0; X < I; X++) {
			printf("%i\n", Matriz[X][Coluna]);
		}
		
		printf("\nChecking:\n");
		for (X = 0; X < I; X++) {
			for (Y = 0; Y < J; Y++) {
				printf("%i ", Matriz[X][Y]);
			}
			printf("\n");
		}	
	}
	
	return 0;
}
