#include <stdio.h>
#include <locale.h>

int Funcao_Verifica(int Valor1, int Valor2) {
	if (Valor1 > Valor2)
		return Valor1;
	
	return Valor2;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int Valor1, Valor2, Valor3, Auxiliar, Resultado;
	
	printf("Digite dois números: ");
	scanf("%d %d %d", &Valor1, &Valor2, &Valor3);
	
	Auxiliar = Funcao_Verifica(Valor1, Valor2);
	Resultado = Funcao_Verifica(Auxiliar, Valor3);
	
	printf("O maior valor é: %d", Resultado);
	
	return 0;
}
