#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int numJogador1, numJogador2, numTentativa;
	
	
	numTentativa = 10;
	
	printf("Digite um n�mero para o segundo jogador tentar acertar: ");
	scanf("%d", &numJogador1);
	
	system("cls");	
	
	do {
		printf("Digite um n�mero para tentar acertar o n�mero do jogador 1 vc tem 10 tentativas: ");
		scanf("%d", &numJogador2);
		
		if (numJogador2 != numJogador1) {
			printf("N�mero incorreto, tente novamente\n");
		
		} else {
			printf("N�mero correto!! parab�ns");
		}
		
		numTentativa--;
		
		if (numTentativa <= 0) {
			printf("Suas tentativas acabaram, tente novamente com o jogador 1 inserindo um novo n�mero: ");
			break;
		} else {
			printf("Continue tentando!\n");
		}
		
	}	while (numJogador2 != numJogador1);
	
			
	return 0;
}
