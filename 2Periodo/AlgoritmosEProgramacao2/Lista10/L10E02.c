#include <stdio.h>
#include <locale.h>


int Potencia(int Base, int Expoente) {
	int I, Pot = 1;
	for (I = 1; I <= Expoente; I++) {
		Pot *= Base;
	}
	
	return Pot;
}


int main() {
	setlocale(LC_ALL, "Portuguese");
	int Numero1, Numero2;
	
	printf("Digite a base da potência: ");
	scanf("%i", &Numero1);
	
	printf("Digite o expoente da potência: ");
	scanf("%i", &Numero2);
	
	int Resultado = Potencia(Numero1, Numero2);
	
	printf("Resultado da operação: %i\n", Resultado);
	
	return 0;
}
