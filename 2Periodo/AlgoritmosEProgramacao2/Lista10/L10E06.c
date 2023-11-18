#include <stdio.h>
#include <locale.h>

int MULTIPLO(int Num1, int Num2) {
	if (Num1 % Num2 == 0) {
		return 1;
	}
	
	return 0;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int Numero1, Numero2;
	
	printf("Número 1: ");
	scanf("%i", &Numero1);
	
	printf("Número 2: ");
	scanf("%i", &Numero2);
	
	if (MULTIPLO(Numero1, Numero2) == 0) {
		printf("O número %d não é múltiplo do número %i\n", Numero1, Numero2);
	} else {
		printf("O número %d é múltiplo do número %i\n", Numero1, Numero2);
	}
	
	return 0;
}
