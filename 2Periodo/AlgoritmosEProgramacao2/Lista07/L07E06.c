#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FILE *PonteiroArquivo, *PonteiroDestino;
	char NomeArquivo[100], Caracter, Anterior = 'a';
	int EmBranco = 0, Flag = 0;
	
	printf("Digite o nome do arquivo com a extensão: ");
	gets(NomeArquivo);
	
	PonteiroArquivo = fopen(NomeArquivo, "r");
	if (PonteiroArquivo == NULL) {
		printf("Erro ocorreu! Não foi possível abrir o arquivo de entrada.\n");
		exit(1);
	}
	
	PonteiroDestino = fopen("Destino.txt", "w");
	if (PonteiroDestino == NULL) {
		printf("Erro ocorreu! Não foi possível abrir o arquivo de saída.\n");
		exit(1);
	}
	
	while ((Caracter = fgetc(PonteiroArquivo)) != EOF) {	
		if (Anterior == ' ' && Caracter == ' ') {
			
		} else {
			fputc(Caracter, PonteiroDestino);
		}
		
        Anterior = Caracter; // Atualiza o caractere anterior
	}
	
	fclose(PonteiroArquivo);
	fclose(PonteiroDestino);
	
	return 0;
}
