#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define T 100

typedef char String[100];

int main() {
	
	FILE *PonteiroArquivo, *DestinoArquivo;
	String Palavra;
	int I;
	
	PonteiroArquivo = fopen("Fonte.txt", "r");
	if (PonteiroArquivo == NULL) {
		printf("Problemas ao abrir o arquivo origem!\n");
		exit(1);
	}
	
	DestinoArquivo = fopen("Destino.txt", "w");
	if (DestinoArquivo == NULL) {
		printf("Problemas ao abrir o arquivo destino!\n");
		exit(1);
	}
	
	while (!feof(PonteiroArquivo)) {
		fgets(Palavra, 99, PonteiroArquivo);
		
		if (strcmp(Palavra, "vc") == 0) {
			fputs("você", DestinoArquivo);
		} else {
			fputs(Palavra, DestinoArquivo);
		}
		
		if (strcmp(Palavra, "kd") == 0) {
			fputs("cadê", DestinoArquivo);
		} else {
			fputs(Palavra, DestinoArquivo);
		}
		
		if (strcmp(Palavra, "vlw") == 0) {
			fputs("valeu", DestinoArquivo);
		} else {
			fputs(Palavra, DestinoArquivo);
		}
		
		if (strcmp(Palavra, "fds") == 0) {
			fputs("fim de semana", DestinoArquivo);
		} else {
			fputs(Palavra, DestinoArquivo);
		}
		
	}
	
	fclose(PonteiroArquivo);
	fclose(DestinoArquivo);
	
	return 0;
}
