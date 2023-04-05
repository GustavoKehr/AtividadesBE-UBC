/**
Código que utiliza a estrutura de repetição "do-while" para exibir na tela
os valores de uma variável "i" enquanto esta for maior ou igual a 0,
começando com o valor 500 e decrementando em 1 a cada iteração.
*/
#include <stdio.h> // Biblioteca padrão de entrada e saída de dados em C
#include <locale.h> // Biblioteca para permitir a exibição de caracteres acentuados

int main () {

setlocale(LC_ALL, "portuguese"); // Define a localização para português para a exibição de caracteres acentuados

int i; // Declaração da variável i, do tipo inteiro

i = 500; // Inicializa a variável i com 500

do { // Inicia a estrutura de repetição "do-while", que garante que o bloco de código dentro dela seja executado pelo menos uma vez, mesmo que a condição de parada seja falsa.
	
	printf("O valor do contador é de: %d\n", i); // Exibe na tela o valor atual da variável i
	
	i = i - 1; // Decrementa o valor da variável i em 1 a cada iteração
	
} while (i >= 0); // Verifica se o valor da variável i ainda é maior ou igual a 0, se sim, o bloco de código dentro do "do" é executado novamente

return 0; // Encerra o programa com sucesso
}
