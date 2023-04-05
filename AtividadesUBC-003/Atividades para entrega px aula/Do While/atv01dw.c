/**
Código que utiliza a estrutura de repetição "do-while" para exibir na tela
os valores de uma variável "i" enquanto esta for menor ou igual a 25.
*/
#include <stdio.h> // Biblioteca padrão de entrada e saída de dados em C
#include <locale.h> // Biblioteca para permitir a exibição de caracteres acentuados

int main () {

setlocale(LC_ALL, "portuguese"); // Define a localização para português para a exibição de caracteres acentuados

int i; // Declaração da variável i, do tipo inteiro

i = 1; // Inicializa a variável i com 1

do { // Inicia a estrutura de repetição "do-while", que garante que o bloco de código dentro dela seja executado pelo menos uma vez, mesmo que a condição de parada seja falsa.
	
	printf("O valor do contador é de: %d\n", i); // Exibe na tela o valor atual da variável i
	
	i = i + 1; // Incrementa o valor da variável i em 1 a cada iteração
	
} while (i <= 25); // Verifica se o valor da variável i ainda é menor ou igual a 25, se sim, o bloco de código dentro do "do" é executado novamente

return 0; // Encerra o programa com sucesso
}
