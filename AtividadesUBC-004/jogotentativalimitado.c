#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int numJogador1, numJogador2, numTentativa;
	
	
	numTentativa = 10;
	
	printf("Digite um número para o segundo jogador tentar acertar: ");
	scanf("%d", &numJogador1);
	
	system("cls");	
	
	do {
		printf("Digite um número para tentar acertar o número do jogador 1 vc tem 10 tentativas: ");
		scanf("%d", &numJogador2);
		
		if (numJogador2 != numJogador1) {
			printf("Número incorreto, tente novamente\n");
		
		} else {
			printf("Número correto!! parabéns");
		}
		
		numTentativa--;
		
		if (numTentativa <= 0) {
			printf("Suas tentativas acabaram, tente novamente com o jogador 1 inserindo um novo número: ");
			break;
		} else {
			printf("Continue tentando!\n");
		}
		
	}	while (numJogador2 != numJogador1);
	
			
	return 0;
}
