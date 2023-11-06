#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 100

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int I, Palavras = 0;
	char Frase[T], Maiuscula[T], Minuscula[T];
	
	printf("Digite a frase a ser processada:\n");
	scanf(" %[^\n]s", Frase);
	
	for (I = 0; Frase[I] != '\0'; I++) {
		if (Frase[I] != ' ' && Frase[I + 1] == ' ') {
			Palavras++;
		} else if (Frase[I] != ' ' && Frase[I + 1] == '\0') {
			Palavras++;
		}
	}
	
	printf("Existe(m) %i palavra(s) na string.\n", Palavras);
	
	return 0;
}
