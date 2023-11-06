#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 20

int main() {
	int I, Caracteres;
	char Frase[T], Invertida[T];
	
	printf("Digite as letras e pressione <Enter> para finalizar a leitura:\n");
	scanf(" %[^\n]s", Frase);
	
	Caracteres = strlen(Frase);
	printf("%i\n", Caracteres);
	
	for (I = 0; Frase[I] != '\0'; I++) {
		if (I == 0) {
			Invertida[Caracteres] = '\0';
		}
		
		Invertida[Caracteres - 1] = Frase[I];
		Caracteres--;
	}
	
	printf("%s\n", Invertida);
	
	return 0;
}
