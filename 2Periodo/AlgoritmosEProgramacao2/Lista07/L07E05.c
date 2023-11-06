#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FILE *PonteiroArquivo;
	char Extensao[4], Caractere;
	int I = 0, Flag = 0, Contador = 0, Tamanho = 0;
	
	printf("Qual extens�o deve ser procurada? ");
	gets(Extensao);
	Tamanho = strlen(Extensao);
	
	system("dir > Diretorio.txt");
	
	PonteiroArquivo = fopen("Diretorio.txt", "r");
	if (PonteiroArquivo == NULL) {
		printf("Erro inesperado! N�o foi poss�vel abrir o arquivo.\n");
		exit(1);
	} else {
		while ((Caractere = fgetc(PonteiroArquivo)) != EOF) {
			if (Contador == Tamanho && isalpha(Caractere) == 0) {
				Flag++;
			}
			
			if (Caractere == Extensao[I]) {
				Contador++;
				I++;
			} else {
				Contador = 0;
				I = 0;
			}
		}
		
		printf("Este diret�rio tem %i arquivos com a extens�o %s", Flag, Extensao);
	}
	
	fclose(PonteiroArquivo);
	
	return 0;
}
