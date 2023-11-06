#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h> 
#define TAM 30
int main()
{
 char Frase[TAM];
 int I, X;
 printf("Entrada:\n");
 scanf(" %[^\n]s",Frase);
 for(I=0;Frase[I]!='\0';I++)
 {
 	Frase[I] = toupper(Frase[I]); 
	 if(Frase[I] =='A' ||Frase[I] =='E' ||Frase[I] =='I' ||Frase[I] =='O' ||Frase[I] =='U')
	 {
	 	Frase[I] = '*';
	 }
 }
 printf("Saida:\n");
 printf("%s\n",Frase);
 return 0;
}
