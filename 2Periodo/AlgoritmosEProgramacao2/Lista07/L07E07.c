#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FILE *PonteiroArquivo, *PonteiroDestino;
	char Caracter, Primeiro = '1', Segundo = '2', Terceiro = '3';
	
	PonteiroArquivo = fopen("Entrada.txt", "r");
	if (PonteiroArquivo == NULL) {
		printf("Erro ocorrido! Não foi possível abrir o arquivo de entrada.\n");
		exit(1);
	}
	
	PonteiroDestino = fopen("Saida.txt", "w");
	if (PonteiroDestino == NULL) {
		printf("Erro ocorrido! Não foi possível abrir o arquivo de saída.\n");
		exit(1);
	}
	
	while ((Caracter = fgetc(PonteiroArquivo)) != EOF) {
//		if (tolower(Primeiro) == 'v' && tolower(Segundo) == 'l' && tolower(Terceiro) == 'w') {
//			fputc("valeu", PonteiroDestino);
//		} else if (tolower(Primeiro) == 'v' && tolower(Segundo) == 'c') {
//			fputc("você", PonteiroDestino);
//		} else if (tolower(Primeiro) == 'k' && tolower(Segundo) == 'd') {
//			fputc("cadê", PonteiroDestino);
//		} else if (tolower(Primeiro) == 'f' && tolower(Segundo) == 'd' && tolower(Terceiro) == 's') {
//			fputc("fim de semana", PonteiroDestino);
//		} else {
//			fputc(Caracter, PonteiroDestino);
//		}
//		
//		if (tolower(Caracter) == 'v' || tolower(Caracter) == 'k' || tolower(Caracter) == 'f') {
//			Primeiro = Caracter;
//		} else if (tolower(Caracter) == 'c' || tolower(Caracter) == 'd' || tolower(Caracter) == 'l') {
//			Segundo = Caracter;
//		} else if (tolower(Caracter) == 'w' || tolower(Caracter) == 's') {
//			Terceiro = Caracter;
//		}
		
		
	}
	
	fclose(PonteiroArquivo);
	fclose(PonteiroDestino);
	
	return 0;
}
