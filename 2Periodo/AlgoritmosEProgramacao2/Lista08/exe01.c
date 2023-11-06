#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define T 100

typedef char String[T];

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FILE *PonteiroArquivo;
	String NomeItem[100], Leitura;
	int Quantidade, I = 0;
	float ValorUnit, Soma = 0;
	
	PonteiroArquivo = fopen("Vendas.txt", "w+");
	
	if (PonteiroArquivo == NULL) {
		printf("Problemas ao abrir o arquivo!\n");
		exit(1);
	}

	while (!feof(PonteiroArquivo)) {
		printf("Digite o nome do item vendido: ");
		scanf(" %[^\n]s", NomeItem[I]);
		
		printf("Digite a quantidade vendida do item (ou 0 para encerrar): ");
		scanf("%i", &Quantidade);
		
		if (Quantidade == 0) {
			break;
		}
		
		printf("Digite o valor unitário do item vendido: ");
		scanf("%f", &ValorUnit);
		
		fputs(NomeItem[I], PonteiroArquivo);
		fputc('\t', PonteiroArquivo);
		
		fprintf(PonteiroArquivo, "%d", Quantidade);
		fputc('\t', PonteiroArquivo);
		
		fprintf(PonteiroArquivo, "%.2f", ValorUnit);
		fputc('\n', PonteiroArquivo);
		
		Soma += Quantidade * ValorUnit;
		
		I++;
	}
	
	system("cls");
	printf("Itens vendidos: \n");
	rewind(PonteiroArquivo);
	
	while (!feof(PonteiroArquivo)) {
		fgets(Leitura, 99, PonteiroArquivo);
		
		if (!feof(PonteiroArquivo)) {
			printf("%s", Leitura);
		}
	}
	
	fclose(PonteiroArquivo);
	
	return 0;
}
