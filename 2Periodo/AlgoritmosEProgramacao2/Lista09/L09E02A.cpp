#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define T 100
#define S 2

typedef char String[T];

struct FichaFuncionario {
	String Nome, Data, Estado, Pais, Cidade, Escolaridade, DataIngresso, Profissao;
	char Fumante;
	int QtdDependente;
	float Salario;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	FichaFuncionario Funcionarios[2];
	int I, PosicaoMaior;
	float MaiorSalario;
	
	for (I = 0; I < S; I++) {
		printf("Digite o nome do funcion�rio: ");
		scanf("%s", Funcionarios[I].Nome);
		
		printf("Digite a escolaridade do funcion�rio: ");
		scanf("%s", Funcionarios[I].Escolaridade);
		
		printf("Digite o sal�rio do funcion�rio: ");
		scanf("%f", &Funcionarios[I].Salario);
	}
	
	system("cls");
	
	MaiorSalario = Funcionarios[0].Salario;
	PosicaoMaior = 0;
	for (I = 0; I < S; I++) {
		if (Funcionarios[I].Salario < MaiorSalario) {
			Funcionarios[I].Salario = MaiorSalario;
		}
	}
	
	printf("O maior sal�rio � do funcion�rio: %i\n", PosicaoMaior);
	
	return 0;
}
