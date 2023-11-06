#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  system("dir > Diretorio.txt");
  int i,OcorrenciasExtensao,TamanhoLinha;
	
  FILE *PonteiroArquivo;
  char LinhaArquivo[100],ExtensaoArquivo[4],ExtensaoProcurada[4];
  printf("Qual extensão deve ser procurada?");
  gets(ExtensaoProcurada);
  PonteiroArquivo = fopen("Diretorio.txt","r+"); 
  OcorrenciasExtensao=0;
	while(!feof(PonteiroArquivo)) 
  {
    fgets(LinhaArquivo, 99, PonteiroArquivo);
    i=0;
    TamanhoLinha = strlen(LinhaArquivo);
    if(LinhaArquivo[TamanhoLinha-5]=='.');
    {
    	ExtensaoArquivo[0]=LinhaArquivo[TamanhoLinha-4];
    	ExtensaoArquivo[1]=LinhaArquivo[TamanhoLinha-3];
    	ExtensaoArquivo[2]=LinhaArquivo[TamanhoLinha-2]; 
      // Pulou a posição da string com indice TamanhoLinha-1 porque ela contém um \n que 
      // não precisa ser copiado para a string ExtensaoArquivo
  	  ExtensaoArquivo[3]=LinhaArquivo[TamanhoLinha];
      if(strcmp(ExtensaoArquivo,ExtensaoProcurada)==0)
      { 
	      OcorrenciasExtensao++;	
	    } 
    }
  }	
  printf("Este diretório tem %i arquivos com a extensão %s\n",OcorrenciasExtensao,ExtensaoProcurada); 
  fclose(PonteiroArquivo);  
  system("Pause");   
  return 0;
 }

