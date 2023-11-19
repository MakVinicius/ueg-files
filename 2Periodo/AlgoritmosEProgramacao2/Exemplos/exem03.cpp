#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

int main()
{
	FILE *PontArq;
	int Idades[TAM], I;
	int Validacao;
	setlocale(LC_ALL,"Portuguese");
	
	PontArq = fopen("Dados.dat","rb");
	if(PontArq == NULL)
	{
		printf("Impossível Abrir o arquivo!\n");
		exit(1);
	}
	
	printf("Posição inicial do arquivo: %d\n",ftell(PontArq));
	
	Validacao = fread(Idades,sizeof(int),TAM, PontArq);
	if(Validacao != TAM)
		printf("\nErro ao ler todos os dados!\n");
	else
	{
		for(I=0; I<TAM; I++)
		{
			printf("Idades[%d]: %d\n",I, Idades[I]);
		}
	}
	
	printf("O tamanho d arquivo é de %d Bytes.\n",ftell(PontArq));
	
	fclose(PontArq);
	
	system("Pause");
	
	return 0;
}

