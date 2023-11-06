#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FILE *PonteiroArquivo;
	char NomeArquivo[100], Caractere;
	int Linhas = 0;
	
	printf("Digite o nome do arquivo com a extens�o: ");
	gets(NomeArquivo);
	
	PonteiroArquivo = fopen(NomeArquivo, "r");
	
	if (PonteiroArquivo == NULL) {
		printf("Ocorreu um erro! Arquivo n�o pode ser aberto.\n");
		exit(1);
	} else {
		while ((Caractere = fgetc(PonteiroArquivo)) != EOF) {
			if (Linhas == 0 && Caractere != NULL) {
				Linhas++;
			}
			if (Caractere == '\n') {
				Linhas++;
			}
		}
		
		printf("%i\n", Linhas);
	}
	
	fclose(PonteiroArquivo);
	
	return 0;
}
