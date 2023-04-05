/*Este código em C tem como objetivo receber 10 pares de notas de um usuário, calcular as médias e exibi-las na tela, além de calcular a média total das 10 médias.
*/
#include <stdio.h>
#include <locale.h>

int main () { // Função principal do programa, onde a execução do programa começa.
	
	// Definindo o idioma para o português
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as variáveis
	int i;
	float n1, n2, media, media_total;
	
	// Inicializando as variáveis de controle
	i = 1;
	media_total = 0;
	
	// Iniciando o loop para receber as notas e calcular as médias
	do {
		// Solicitando e lendo as notas
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		
		// Calculando a média e exibindo na tela
		media = (n1+n2)/2;
		printf("Sua média é de: %.2f\n", media);
		
		// Somando a média atual à média total e incrementando o contador
		media_total += media;
		i++;
		
	} while (i <= 10);
	
	// Calculando a média total e exibindo na tela
	media_total = media_total/10;
	printf("A média total foi de: %2.f\n", media_total);
	
	return 0;
}

