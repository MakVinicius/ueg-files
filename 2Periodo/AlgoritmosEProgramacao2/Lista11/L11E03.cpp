#include <stdio.h>
#include <locale.h>

void frac(float Numero, int *Inteiro, float *Fracionario) {
	*Inteiro = Numero;
	*Fracionario = Numero - *Inteiro;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int NumeroInt, *PNumeroInt;
	float NumeroFloat, *PNumeroFloat, RestoFloat, *PRestoFloat;
	
	PNumeroInt = &NumeroInt;
	PRestoFloat = &NumeroFloat;
	
	printf("Digite um n�mero decimal: ");
	scanf("%f", &NumeroFloat);
	
	frac(NumeroFloat, &NumeroInt, &RestoFloat);
	
	printf("Parte Inteira: %d\n", NumeroInt);
	printf("Parte fracion�ria: %.2f\n", RestoFloat);
	printf("N�mero inteiro: %.2f\n", NumeroFloat);
	
	return 0;
}
