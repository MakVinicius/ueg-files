#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define TAM 100

int main()
{
   setlocale(LC_ALL,"Portuguese");
   FILE *PonteiroArquivo;
   char String[TAM], StringAux[TAM], NomeArq[TAM];
   char Caracter;
   int I = 0, Cont = 0;
   printf("Digite o nome do arquivo com a extensão: ");
   gets(NomeArq);
   PonteiroArquivo = fopen(NomeArq,"r"); 
   
   if(PonteiroArquivo == NULL)
   {
      printf("\n Nao consigo abrir o arquivo ! ");
      exit(1);
   }
   else
   {
   	printf("Digite o nome da palavra para pesquisar no arquivo: ");
   	gets(String);
   	while((Caracter = fgetc(PonteiroArquivo)) != EOF)
    {

    	printf("%c",Caracter);
     	if(Caracter != ' '&& Caracter!='\n'&& Caracter!=',' )
	   	{
			StringAux[I] = Caracter;
			I++;
		}
	  	else
	  	{
		  	StringAux[I] = '\0';
		  	if(stricmp(String,StringAux) == 0)
		   		Cont++;
		  	I = 0;
		}
		
    }
   }
   printf("\n\nQuantidade de palavras iguais a %s no arquivo %s: %d\n",String,NomeArq,Cont);
   fclose(PonteiroArquivo);
   system("Pause");    
   return 0; 
}

