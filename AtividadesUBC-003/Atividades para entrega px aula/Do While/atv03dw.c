/**
C�digo que utiliza a estrutura de repeti��o "do-while" para exibir na tela
os valores de uma vari�vel "i" enquanto esta for menor ou igual a 200,
come�ando com o valor 5.
*/
#include <stdio.h> // Biblioteca padr�o de entrada e sa�da de dados em C
#include <locale.h> // Biblioteca para permitir a exibi��o de caracteres acentuados

int main () {
	
setlocale(LC_ALL, "portuguese"); // Define a localiza��o para portugu�s para a exibi��o de caracteres acentuados

int i; // Declara��o da vari�vel i, do tipo inteiro

i = 5; // Inicializa a vari�vel i com 5

do { // Inicia a estrutura de repeti��o "do-while", que garante que o bloco de c�digo dentro dela seja executado pelo menos uma vez, mesmo que a condi��o de parada seja falsa.
	
	printf("O valor do contador � de: %d\n", i); // Exibe na tela o valor atual da vari�vel i
	
	i = i + 1; // Incrementa o valor da vari�vel i em 1 a cada itera��o
	
} while (i <= 200); // Verifica se o valor da vari�vel i ainda � menor ou igual a 200, se sim, o bloco de c�digo dentro do "do" � executado novamente

return 0; // Encerra o programa com sucesso
}
