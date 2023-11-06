#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 20

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int I, J, Letras = 0;
	char Frase[T], Caracter;
	
	printf("Digite a string: ");
	scanf(" %[^\n]s", Frase);
	
	printf("Digite o caracter: ");
	scanf(" %c", &Caracter);
	
	Letras = strlen(Frase);
	printf("%i\n", Letras);
	
	for (I = 0; Frase[I] != '\0'; I++) {
		if (Frase[I] == Caracter) {
			for (J = I; J < Letras; J++) {
				Frase[J] = Frase[J + 1];
			}
		}
	}
	
	printf("String sem o caracter %c: %s\n", Caracter, Frase);
		
	return 0;
}
