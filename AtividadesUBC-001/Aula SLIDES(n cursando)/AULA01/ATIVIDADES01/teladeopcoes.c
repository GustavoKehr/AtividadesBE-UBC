#include <locale.h>
#include <stdio.h>

main() {
	
	setlocale(LC_ALL, "portuguese");
	
	char opcao;
	
	printf("\n--------------------------");
	printf("\n*    Menu de op��es      *");
	printf("\n*                        *");
	printf("\n*    A - Cadastrar       *");
	printf("\n*    B - Pesquisar       *");
	printf("\n*    C - Alterar         *");
	printf("\n--------------------------");
	
	printf("\nDigite a op��o desejada: ");
	
	scanf("%c", &opcao);
	
	//cadastro
	printf("\n--------------------------");
	printf("\n*                        *");
	printf("\n*                        *");
	printf("\n*        CADASTRAR       *");
	printf("\n*                        *");
	printf("\n*                        *");
	printf("\n--------------------------");
	
	//pesquisa
	printf("\n--------------------------");
	printf("\n*                        *");
	printf("\n*                        *");
	printf("\n*      PESQUISAR         *");
	printf("\n*                        *");
	printf("\n*                        *");
	printf("\n--------------------------");
	
	//alteracao
	printf("\n--------------------------");
	printf("\n*                        *");
	printf("\n*                        *");
	printf("\n*        ALTERAR         *");
	printf("\n*                        *");
	printf("\n*                        *");
	printf("\n--------------------------");
	

}

