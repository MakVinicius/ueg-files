#include <stdio.h>
#include <locale.h>

float calculadora(chat Operacao, float Numero1, float Numero2) {	
	if (Operacao == '+') {
		return Numero1 + Numero2;
	} else if (Operacao == '-') {
		return Numero1 - Numero2;
	} else if (Operacao == '*') {
		return Numero1 * Numero2;
	} else if (Operacao == '/') {
		return Numero1 / Numero2;
	} else if (Operacao == 'F') {
		exit(1);
	} else {
		char Sinal;
		float Valor1, Valor2;
		printf("Digite a operação a ser feita (+, -, *, /) e dois números para a calculadora: ");
		scanf(" %c %d %d", &Sinal, &Valor1, &Valor2);
	
		calculadora(Sinal, Valor1, Valor2);
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float Numero1, Numero2;
	char Operacao;
	
	printf("Digite a operação a ser feita (+, -, *, /) e dois números para a calculadora: ");
	scanf(" %c %d %d", &Operacao, &Numero1, &Numero2);
	
	
	return 0;
}
