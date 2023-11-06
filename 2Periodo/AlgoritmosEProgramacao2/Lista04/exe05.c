#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 100

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int I, Valido = 0, Arroba = 0, Ponto = 0;
	char Email[T];
	
	printf("Digite o email a ser validado:\n");
	do {
		scanf(" %[^\n]s", Email);
	
		for (I = 0; Email[I] != '\0'; I++) {
			if (Email[I] == '@') {
				Arroba = 1;
			} else if (Arroba != 0) {
				Ponto = 1;
			}
		}
		
		if (Arroba != 0 && Ponto != 0) {
			Valido = 1;
		}
		
		if (Valido == 0) {
			printf("E-mail inválido. Digite Novamente:\n");
		} else {
			printf("E-mail válido.\n");
		}
	} while (Valido == 0);
		
	return 0;
}
