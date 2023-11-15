#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define T 100
#define QTD 2

typedef char String[T];

struct VendaVeiculo {
	String DataVenda, NomeVendedor, NomeComprador, NumeroChassi;
	float ValorVenda;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	VendaVeiculo Veiculos[QTD];
	int I;
	float Soma = 0;
	
	for (I = 0; I < QTD; I++) {
		printf("Digite a data da venda do veículo: ");
		scanf("%s", Veiculos[I].DataVenda);
		
		printf("Digite o nome do vendedor: ");
		scanf("%s", Veiculos[I].NomeVendedor);
		
		printf("Digite o nome do comprador: ");
		scanf("%s", Veiculos[I].NomeComprador);
		
		printf("Digite o valor da venda: ");
		scanf("%f", &Veiculos[I].ValorVenda);
		
		printf("Digite o número do chassi: ");
		scanf("%s", Veiculos[I].NumeroChassi);
				
		Soma += Veiculos[I].ValorVenda;
	}
	system("cls");

	for (I = 0; I < QTD; I++) {
		printf("Informações do veículo %i :\n", I + 1);
		printf("\tData de venda: %s\n", Veiculos[I].DataVenda);
		printf("\tNome do vendedor: %s\n", Veiculos[I].NomeVendedor);
		printf("\tNome do comprador: %s\n", Veiculos[I].NomeComprador);
		printf("\tValor de venda: %.2f\n", Veiculos[I].ValorVenda);
		printf("\tNúmero do chassi: %s\n", Veiculos[I].NumeroChassi);
	}

	printf("\nSoma das vendas: %.2f", Soma);	
	
	return 0;
}
