#include <stdio.h>
#include <locale.h>

void somavalores(float *A, float *B) {
	*A = *A + *B;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float Numero1, Numero2, *PNumero1, *PNumero2;
	
	PNumero1 = &Numero1;
	PNumero2 = &Numero2;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &Numero1);
	printf("Digite o segundo número: ");
	scanf("%f", &Numero2);
	
	somavalores(&Numero1, &Numero2);
	
	printf("Soma dos valores: %.2f", Numero1);
	
	return 0;
}
