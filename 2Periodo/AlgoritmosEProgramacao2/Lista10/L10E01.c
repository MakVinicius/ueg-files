#include <stdio.h>
#include <locale.h>

int Funcao_Verifica(int Valor1, int Valor2) {
	if (Valor1 > Valor2)
		return Valor1;
	
	return Valor2;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int Valor1, Valor2;
	
	printf("Digite dois n�meros: ");
	scanf("%d%d", &Valor1, &Valor2);
	printf("O maior n�mero �: %d\n", Funcao_Verifica(Valor1, Valor2));		
	
	return 0;
}
