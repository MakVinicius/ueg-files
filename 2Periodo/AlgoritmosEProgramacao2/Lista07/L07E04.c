#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define T 100

typedef char String[T];

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FILE *PonteiroArquivo;
	char Caractere;
	String Palavra, NomeArquivo;
	int I = 0, Flag = 0, Tamanho = 0, Contador = 0;
	
	printf("Digite o nome do arquivo com extensão: ");
	gets(NomeArquivo);
	
	printf("Digite a palavra para procurar no arquivo: ");
	scanf(" %[^\n]s", Palavra);
	Tamanho = strlen(Palavra);
	
	PonteiroArquivo = fopen(NomeArquivo, "r");
	if (PonteiroArquivo == NULL) {
		printf("Ocorreu um erro! O arquivo não pode ser aberto.\n");
		exit(1);
	} else {
		while ((Caractere = fgetc(PonteiroArquivo)) != EOF) {
			if (Contador == Tamanho) {
				Flag++;
			}
		
			if (tolower(Caractere) == tolower(Palavra[I])) {
				Contador++;
				I++;
			} else {
				Contador = 0;
				I = 0;
			}
		}
		
		printf("Número de vezes que a palavra aparece: %i\n", Flag);
		
		fclose(PonteiroArquivo);
	}
	
	
	return 0;
}
