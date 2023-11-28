#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int X, Y, *P;
	
	Y = 0;
	P = &Y;
	X = *P;
	
	printf("Valor de X: %i\n", X);
	
	X = 4;
	(*P)++;
	printf("Valor de P: %i\n", *P);
	
	X--;
	P = &X;
	(*P) += Y;
	printf("Valor de X: %i\n", *P);

	return 0;
}
