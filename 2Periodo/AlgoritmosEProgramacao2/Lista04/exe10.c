#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 20

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float Valor;
	int Tipo, I, AntesArroba = 0, DepoisArroba = 0, Numeros = 0, Arroba = 0;
	char Chave[T];
	
	printf("1 - CPF\n");
	printf("2 - CNPJ\n");
	printf("3 - Celular\n");
	printf("4 - e-mail\n");
	printf("Digite o tipo de chave PIX: ");
	scanf("%i", &Tipo);
	printf("Digite a Chave: ");
	scanf(" %[^\n]s", Chave);
	
	if (Tipo == 1) {
		for (I = 0; Chave[I] != '\0'; I++) {
			if (isdigit(Chave[I])) {
				Numeros++;
			}
		}
		if (Numeros != 11) {
			printf("CPF inválido!\n");
		} else {
			printf("Valor a transferir: ");
			scanf("%f", &Valor);
			printf("PIX realizado com sucesso!\n");
		}
	} else if (Tipo == 2) {
		for (I = 0; Chave[I] != '\0'; I++) {
			if (isdigit(Chave[I])) {
				Numeros++;
			}
		}
		if (Numeros != 14) {
			printf("CNPJ inválido!\n");
		} else {
			printf("Valor a transferir: ");
			scanf("%f", &Valor);
			printf("PIX realizado com sucesso!\n");
		}
	} else if (Tipo == 3) {
		for (I = 0; Chave[I] != '\0'; I++) {
			if (isdigit(Chave[I])) {
				Numeros++;
			}
		}
		if (Numeros != 11) {
			printf("Quantidade de dígitos p/ telefone inválida!\n");
		} else {
			printf("Valor a transferir: ");
			scanf("%f", &Valor);
			printf("PIX realizado com sucesso!\n");
		}
	} else if (Tipo == 4) {
		for (I = 0; Chave[I] != '\0'; I++) {
			if (Arroba == 0 && AntesArroba == 0) {
				AntesArroba++;
			} else {
				if (Chave[I] == '@') {
					Arroba = 1;
				}
				
				if (DepoisArroba == 0 && Arroba != 0 && Chave[I] != '@') {
					DepoisArroba++;
				}
			}
		}
		if (Arroba == 1 && AntesArroba != 0 && DepoisArroba != 0) {
			printf("Valor a transferir: ");
			scanf("%f", &Valor);
			printf("PIX realizado com sucesso!\n");
		} else {
			printf("Formato de e-mail inválido!\n");
		}
	} else {
		printf("Digite uma opção válida!\n");
	}
	
	
	return 0;
}
