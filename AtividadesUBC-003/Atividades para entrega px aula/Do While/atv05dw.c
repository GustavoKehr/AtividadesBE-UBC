/**
Código que utiliza a estrutura de repetição "do-while" para exibir na tela
os números pares de 2 a 20, incrementando de 2 em 2 a cada iteração.
*/
#include <stdio.h> // Biblioteca padrão de entrada e saída de dados em C
#include <locale.h> // Biblioteca para permitir a exibição de caracteres acentuados

int main(){

setlocale(LC_ALL,"portuguese"); // Define a localização para português para a exibição de caracteres acentuados

int i; // Declaração da variável i, do tipo inteiro

i = 2; // Inicializa a variável i com 2

do {
	
	printf("Os números pares são: %d\n", i); // Exibe na tela o valor atual da variável i, que representa os números pares de 2 a 20
	
	i = i + 2; // Incrementa o valor da variável i em 2 a cada iteração, para avançar para o próximo número par
	
} while (i <= 20); // Verifica se o valor da variável i ainda é menor ou igual a 20, se sim, o bloco de código dentro do "do" é executado novamente

return 0; // Encerra o programa com sucesso
}
