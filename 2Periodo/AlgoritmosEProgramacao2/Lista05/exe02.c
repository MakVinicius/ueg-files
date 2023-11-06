#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 100
#define Y 3
#define E 5

typedef char String[T];
typedef String Carro[Y];

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int I, J;
	Carro Caminhao[E];
	float Barato, Caro;
	String BaratoNome[1], CaroNome[1];
	float Soma = 0.0;
	
	for (I = 0; I < E; I++) {
		printf("Modelo: ");
		scanf(" %[^\n]s", Caminhao[I][0]);
		
		printf("ano: ");
		scanf(" %[^\n]s", Caminhao[I][1]);
		
		printf("Valor: ");
		scanf("%f", Caminhao[I][2]);
		
		printf("\n");
	}
	
	Barato = Caminhao[0][2];
	Caro = Caminhao[0][2];
	
	for (I = 0; I < E; I++) {
		if (Barato > Caminhao[I][2]) {
			Barato = Caminhao[I][2];
			strcpy(BaratoNome[0], Caminhao[I][0]);
		}
		
		if (Caro < Caminhao[I][2)) {
			Caro = Caminhao[I][2];
			strcpy(CaroNome[0], Caminhao[I][0]);
		}
		
		Soma = Soma + Caminhao[I][2];
	}
	
	printf("%s\n", CaroNome[0]);
	printf("%s\n", BaratoNome[0]);
	printf("%.2f\n", Soma);
	
	return 0;
}
