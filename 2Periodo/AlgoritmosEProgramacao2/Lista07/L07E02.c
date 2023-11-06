#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FILE *PonteiroArquivo;
	char NomeArquivo[50], Caractere;
	int A = 0, E = 0, I = 0, O = 0, U = 0, X;
	
	printf("Digite o nome do arquivo com a extensão: ");
	gets(NomeArquivo);
	
	PonteiroArquivo = fopen(NomeArquivo, "r");
		
	if (PonteiroArquivo == NULL) {
		printf("Ocorreu um erro! O arquivo não foi aberto!\n");
		exit(1);
	} else {		
		while ((Caractere = fgetc(PonteiroArquivo)) != EOF) {
			if (Caractere == 'A' || Caractere == 'a') {
				A++;
			} else if (Caractere == 'E' || Caractere == 'e') {
				E++;
			} else if (Caractere == 'I' || Caractere == 'i') {
				I++;
			} else if (Caractere == 'O' || Caractere == 'o') {
				O++;
			} else if (Caractere == 'U' || Caractere == 'u') {
				U++;
			}
		}
		printf("A: %i\tE: %i\tI: %i\tO: %i\tU: %i\n", A, E, I, O, U);
		
		fclose(PonteiroArquivo);
	}
	
	
	return 0;
}
