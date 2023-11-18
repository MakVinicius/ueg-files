#include <stdio.h>
#include <locale.h>

float Func_Maior(float Valor1, float Valor2) {
	if (Valor1 > Valor2)
		return Valor1;
	
	return Valor2;
}

float Func_Menor(float Valor1, float Valor2) {
	if (Valor1 < Valor2)
		return Valor1;
	
	return Valor2;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float Num1, Num2, Num3, Maior, Menor;
	
	printf("Número 1: ");
	scanf("%f", &Num1);
	printf("Número 2: ");
	scanf("%f", &Num2);
	printf("Número 3: ");
	scanf("%f", &Num3);
	
	Maior = Func_Maior(Num1, Num2);
	Maior = Func_Maior(Maior, Num3);
	
	Menor = Func_Menor(Num1, Num2);
	Menor = Func_Menor(Menor, Num3);
	
	printf("O menor número é %.2f\n", Menor)	;
	printf("O maior número é %.2f\n", Maior);
	
	return 0;
}
