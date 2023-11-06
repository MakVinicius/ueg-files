#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 20

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int A = 0, E = 0, I = 0, O = 0, U = 0, Indice;
	char Frase[T];
	
	printf("Digite as letras e pressione <Enter> para finalizar a leitura (no máximo 20 letras):\n");
	scanf("%[^\n]s", Frase);
	
	for (Indice = 0; Frase[Indice] != '\0'; Indice++) {
		if (Frase[Indice] == 'a' || Frase[Indice] == 'A') {
			A++;
		} else if (Frase[Indice] == 'e' || Frase[Indice] == 'E') {
			E++;
		} else if (Frase[Indice] == 'i' || Frase[Indice] == 'I') {
			I++;
		} else if (Frase[Indice] == 'o' || Frase[Indice] == 'O') {
			O++;
		} else if (Frase[Indice] == 'u' || Frase[Indice] == 'U') {
			U++;
		}
	}
	
	printf("Letra\tQuantidade\n");
	printf("a\t%i\n", A);
	printf("e\t%i\n", E);
	printf("i\t%i\n", I);
	printf("o\t%i\n", O);
	printf("u\t%i\n", U);
	
	return 0;
}
