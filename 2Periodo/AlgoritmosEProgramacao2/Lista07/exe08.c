#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define T 100

typedef char String[100];

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FILE *PonteiroArquivo, *PonteiroResultado;
	String Palavra, Procurar, PalavraFinal, Linha;
	int Tamanho, SomaTamanho = 0;
	
	PonteiroArquivo = fopen("Origem.txt", "r");
	if (PonteiroArquivo == NULL) {
		printf("Problemas ao abrir o arquivo\n");
		exit(1);
	}
	
	PonteiroResultado = fopen("Resultado.txt", "w");
	if (PonteiroResultado == NULL) {
		printf("Problemas ao abrir o arquivo\n");
		exit(1);
	}
	
	printf("Digite a palavra a ser procurada: ");
	gets(Procurar);
	
	printf("Digite a palavra final para ficar no arquivo: ");
	gets(PalavraFinal);
	
	while (fscanf(PonteiroArquivo, "%s", Palavra) != EOF) {
	    fgets(Linha, 99, PonteiroArquivo);
	    Tamanho = strlen(Linha);
	    printf("%i\n", Tamanho);
	    
	    SomaTamanho = SomaTamanho + strlen(Palavra) + 1;
	    
	    if (SomaTamanho == Tamanho) {
	    	if (strcmp(Palavra, Procurar) == 0) {
				fputs(PalavraFinal, PonteiroResultado);
				fputc('\n', PonteiroResultado);
				SomaTamanho = 0;
			} else {
				fputs(Palavra, PonteiroResultado);
				fputc('\n', PonteiroResultado);
				SomaTamanho = 0;
			}
		} else {
			if (strcmp(Palavra, Procurar) == 0) {
				fputs(PalavraFinal, PonteiroResultado);
				fputc(' ', PonteiroResultado);
			} else {
				fputs(Palavra, PonteiroResultado);
				fputc(' ', PonteiroResultado);
			}
		}
	    
//	    if ((SomaTamanho == Tamanho) && (strcmp(Palavra, Procurar) == 0)) {
//	    	fputs(PalavraFinal, PonteiroResultado);
//			fputc('\n', PonteiroResultado);
//			SomaTamanho = 0;
//		} else if ((SomaTamanho == Tamanho)) {
//			fputs(Palavra, PonteiroResultado);
//			fputc('\n', PonteiroResultado);
//			SomaTamanho = 0;
//		} else if (strcmp(Palavra, Procurar) == 0) {
//			fputs(PalavraFinal, PonteiroResultado);
//			fputc(' ', PonteiroResultado);
//		} else {
//			fputs(Palavra, PonteiroResultado);
//			fputc(' ', PonteiroResultado);
//		}
	}
	
	fclose(PonteiroArquivo);
	fclose(PonteiroResultado);
	
	return 0;
}
