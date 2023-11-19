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
	
	printf("Digite as Idades:");
	
	for(I=0; I<TAM; I++)
	{
		printf("\nIdades[%d]: ",I);
		scanf("%d",&Idades[I]);
	}
	
	PontArq = fopen("Dados.dat","wb");
	if(PontArq == NULL)
	{
		printf("Impossível Abrir o arquivo!\n");
		exit(1);
	}
	
	Validacao = fwrite(Idades,sizeof(int),TAM, PontArq);
	
	if(Validacao != TAM)
	 printf("\nErro ao gravar todos os dados!\n");
	else
	 printf("Dados Gravados com sucesso no arquivo!\n");
	
	fclose(PontArq);
	 
	system("Pause");
	return 0;
}
