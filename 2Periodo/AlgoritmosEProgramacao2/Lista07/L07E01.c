#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char String[100];
	int I;
	
	printf("Digite uma string: ");
	gets(String);
	
	
	FILE *PonteiroArquivo = fopen("Dados.txt", "w");
	if (PonteiroArquivo == NULL) {
		printf("Ocorreu um erro! O arquivo não foi aberto!\n");
		exit(1);
	} else {
		for (I = 0; String[I] != '\0'; I++) {
			fputc(String[I], PonteiroArquivo);
			fputc('\n', PonteiroArquivo);
		}
		fclose(PonteiroArquivo);
	}
	
	
	return 0;
}
