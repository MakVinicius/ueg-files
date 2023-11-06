#include <stdio.h>
#include <locale.h>

#define T 100
#define Y 10

typedef char String[T];

int main() {
	
	char Sobrenome[T];
	String Nomes[Y];
	int I, Contador = 0;
	
	printf("Digite %i sobrenomes de personagens:\n", Y);
	for (I = 0; I < Y; I++) {
		scanf(" %[^\n]s", Nomes[I]);
	}
	
	printf("\nSobrenome para procurar:\n");
	scanf(" %[^\n]s", Sobrenome);
	
	for (I = 0; I < Y; I++) {
		if (strcmp(Nomes[I], Sobrenome) == 0) {
			Contador++;
		} else {
			// printf("\n%s\t%s\n", Nomes[I], Sobrenome);
		}
		
	}
	
	printf("O sobrenome foi encontrado %i vezes.\n", Contador);
	
	return 0;
}
