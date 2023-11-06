#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 100
#define Y 2

typedef char String[T];

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int I, J;
	String Ingles[Y], Portugues[Y], Palavra;
	char Escolha;
	
	printf("Palavras em português:\n");
	for (I = 0; I < Y; I++) {
		scanf(" %[^\n]s", Portugues[I]);
	}
	
	printf("Palavras em inglês:\n");
	for (I = 0; I < Y; I++) {
		scanf(" %[^\n]s", Ingles[I]);
	}
	
	do {
		printf("Digite uma palavra: ");
		scanf(" %[^\n]s", Palavra);
		
		/*
		if (strcmp(Palavra, '*') == 0) {
			break;
		}
		*/
		
		printf("Inglês[I] Português[P]: ");
		scanf(" %c", &Escolha);
		
		if (Escolha == 'I') {
			for (I = 0; I < Y; I++) {
				if (!strcmp(Ingles[I], Palavra)) {
					printf("Palavra em português: %s\n", Portugues[I]);
				}
			}
		} else if (Escolha == 'P') {
			for (I = 0; I < Y; I++) {
				if (!strcmp(Portugues[I], Palavra)) {
					printf("Palavra em inglês: %s\n", Ingles[I]);
				}
			}
		}
	} while (strcmp(Palavra, '*') != 0);
	
	return 0;
}
