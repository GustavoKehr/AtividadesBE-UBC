/**
Código que utiliza a estrutura de repetição "do-while" para ler um número inteiro do usuário,
e em seguida, exibir na tela o seu antecessor e sucessor, repetindo essa operação por 5 vezes.
*/
#include <stdio.h> // Biblioteca padrão de entrada e saída de dados em C
#include <locale.h> // Biblioteca para permitir a exibição de caracteres acentuados

int main(){

setlocale(LC_ALL,"portuguese"); // Define a localização para português para a exibição de caracteres acentuados

int i, ant, suc; // Declaração das variáveis i (contador), ant (antecessor) e suc (sucessor), todas do tipo inteiro

i = 5; // Inicializa a variável i com o valor 5

do {
	
	printf("Digite o número para ganhar seu antecessor e seu sucessor: "); // Solicita ao usuário que digite um número inteiro
	scanf("%d", &i); // Lê o número digitado pelo usuário e armazena na variável i
	
	ant = i - 1; // Calcula o antecessor do número digitado pelo usuário e armazena na variável ant
	
	suc = i + 1; // Calcula o sucessor do número digitado pelo usuário e armazena na variável suc
	
	printf("Antecessor: %d, Número %d, Sucessor: %d\n", ant, i, suc); // Exibe na tela o antecessor, o número digitado e o sucessor, separados por vírgulas
	
	i++; // Incrementa a variável i em 1 a cada iteração, para repetir o processo por 5 vezes
	
} while (i <= 5); // Verifica se o valor da variável i ainda é menor ou igual a 5, se sim, o bloco de código dentro do "do" é executado novamente

return 0; // Encerra o programa com sucesso
}
