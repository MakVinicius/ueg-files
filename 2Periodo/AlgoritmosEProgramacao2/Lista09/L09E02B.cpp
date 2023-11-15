#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define T 100
#define S 5

typedef char String[T];

struct HistoricoSuper {
	String Nome;
	int AnoCriacao;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	HistoricoSuper Supers[S], Menor;
	int I, J, IndiceMenor;
	
	for (I = 0; I < S; I++) {
		printf("Digite o nome do super herói %i: ", I + 1);
		scanf(" %[^\n]s", Supers[I].Nome);
		
		printf("Digite o ano do super herói %i: ", I + 1);
		scanf("%i", &Supers[I].AnoCriacao);
	}
	
	for(I = 0; I < S - 1; I++)
	{
		Menor = Supers[I];
		IndiceMenor = I;
		
		for(J = I + 1; J < S; J++)
		{
			if(Supers[J].AnoCriacao < Menor.AnoCriacao)
			{
				Menor = Supers[J];
				IndiceMenor = J;
			}
		}
		
		Supers[IndiceMenor] = Supers[I];
		Supers[I] = Menor;
	}
	
	printf("Ano de Criação\tNome\n");
	for (I = 0; I < S; I++) {
		printf("\t%i\t%s\n", Supers[I].AnoCriacao, Supers[I].Nome);
	}
	
	return 0;
}
