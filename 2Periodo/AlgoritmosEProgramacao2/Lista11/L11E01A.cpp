#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int X, Y, *P;
	
	Y = 0;
	P = &Y;
	X = *P;
	X = 4;
	(*P)++;
	printf("Delírio coletivo: %i\n", X);
	X--;
	P = &X;
	(*P) += Y;
	
	printf("X: %i\n", X);
	printf("Y: %i\n", Y);
	printf("P: %i\n", P);
	
	return 0;
}
