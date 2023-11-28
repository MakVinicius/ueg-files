#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int ValorA, ValorB;
	printf("Digite dois números inteiros: ");
	scanf("%d%d", &ValorA, &ValorB);
	
	verificavalor(&ValorA, &ValorB);
	printf("Maior valor: %d\n", ValorA);
	printf("Menor valor: %d\n", ValorB);
	
	return 0;
}
