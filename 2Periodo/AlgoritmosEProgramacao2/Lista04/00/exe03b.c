#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 100

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int I;
	char Frase[T], Maiuscula[T], Minuscula[T];
	
	printf("Digite a frase a ser processada:\n");
	scanf(" %[^\n]s", Frase);
	
	strcpy(Maiuscula, Frase);
	strcpy(Minuscula, Frase);
	
	strupr(Maiuscula);
	strlwr(Minuscula);
	
	printf("Mai�cula: %s\n", Maiuscula);
	printf("Min�scula: %s\n", Minuscula);
	
	return 0;
}
