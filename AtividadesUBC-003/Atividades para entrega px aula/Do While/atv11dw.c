/*Este c�digo em C tem como objetivo receber 10 pares de notas de um usu�rio, calcular as m�dias e exibi-las na tela, al�m de calcular a m�dia total das 10 m�dias.
*/
#include <stdio.h>
#include <locale.h>

int main () { // Fun��o principal do programa, onde a execu��o do programa come�a.
	
	// Definindo o idioma para o portugu�s
	setlocale(LC_ALL, "portuguese");
	
	// Declarando as vari�veis
	int i;
	float n1, n2, media, media_total;
	
	// Inicializando as vari�veis de controle
	i = 1;
	media_total = 0;
	
	// Iniciando o loop para receber as notas e calcular as m�dias
	do {
		// Solicitando e lendo as notas
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		
		// Calculando a m�dia e exibindo na tela
		media = (n1+n2)/2;
		printf("Sua m�dia � de: %.2f\n", media);
		
		// Somando a m�dia atual � m�dia total e incrementando o contador
		media_total += media;
		i++;
		
	} while (i <= 10);
	
	// Calculando a m�dia total e exibindo na tela
	media_total = media_total/10;
	printf("A m�dia total foi de: %2.f\n", media_total);
	
	return 0;
}

