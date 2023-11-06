#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 20

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int I, Diferente = 0;
	char Primeira[T], Segunda[T];
	
	printf("Digite a primeira string: ");
	scanf(" %[^\n]s", Primeira);
	strcpy(Primeira, strlwr(Primeira));
	
	printf("Digite a segunda string: ");
	scanf(" %[^\n]s", Segunda);
	strcpy(Segunda, strlwr(Segunda));
	
	for (I = 0; Primeira[I] != '\0'; I++) {
		if (Primeira[I] != Segunda[I]) {
			Diferente = 1;
			break;
		}
	}
	
	if (Diferente != 0) {
		printf("Ordem alfabética:\n");
		if (Primeira > Segunda) {
			printf("%s\n%s\n", Primeira, Segunda);
		}
	} else {
		printf("Strings iguais.\n");
	}
		
	return 0;
}
