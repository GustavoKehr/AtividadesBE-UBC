#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int numJogador1, numJogador2;
	
	
	printf("Digite um n�mero para o segundo jogador tentar acertar: ");
	scanf("%d", &numJogador1);
	
	system("cls");	
	
	do {
		printf("Digite um n�mero para tentar acertar o n�mero do jogador 1: ");
		scanf("%d", &numJogador2);
		
		if (numJogador2 != numJogador1) {
			printf("N�mero incorreto, tente novamente\n");
		} else {
			printf("N�mero correto!! parab�ns");
		}		
		
	}	while (numJogador2 != numJogador1);
	
			
	return 0;
}
