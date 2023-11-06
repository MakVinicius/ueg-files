#include <stdio.h>
#include <ctype.h>
#include <locale.h>

#define T 100

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int I;
    char Frase[T];
    char Maiusculo[T], Minusculo[T];

    printf("Digite uma frase para ser processada: ");
    scanf(" %[^\n]s", Frase);
    
    printf("%s\n", strlwr(Frase));
    printf("%s\n", strupr(Frase));
    
//    printf("Maiúsculo: ");
//    for (I = 0; Maiusculo[I] != '\0'; I++) {
//    	Maiusculo[I] = toupper(Frase[I]);
//    	printf("%c", Maiusculo[I]);
//	}
//	printf("\n");
//
//	printf("Minúsculo: ");
//    for (I = 0; Maiusculo[I] != '\0'; I++) {
//    	Minusculo[I] = toupper(Frase[I]);
//    	printf("%c", Minusculo[I]);
//	}
//	printf("\n");
    return 0;
}
