/**
Código que solicita ao usuário que digite 30 números inteiros e, em seguida,
exibe a quantidade de números pares digitados.
*/

#include <stdio.h> // Biblioteca padrão de entrada e saída de dados em C
#include <locale.h> // Biblioteca para permitir a exibição de caracteres acentuados

int main () {

setlocale(LC_ALL, "portuguese"); // Define a localização para português para a exibição de caracteres acentuados

int num, contador, i; // Declaração das variáveis num, contador e i, todas do tipo inteiro

i = 1; // Inicializa a variável i com 1

contador = 0; // Inicializa a variável contador com 0

for (i = 1; i <=30; i++){ // Loop for que se repete 30 vezes, começando do valor de i igual a 1 e terminando quando i for igual a 30
	
	printf("Digite um número: "); // Exibe na tela a mensagem "Digite um número: "
	scanf("%d", &num); // Solicita que o usuário digite um número e armazena esse valor na variável num
	
	if (num % 2 == 0) { // Verifica se o número digitado é par, usando a operação de módulo (%), se o resto da divisão de num por 2 for igual a 0, significa que num é par
		contador++; // Se o número digitado for par, incrementa o valor da variável contador em 1
	}
	
}	

printf("O quantidade de números pares é de %d", contador); // Exibe a quantidade de números pares digitados, armazenada na variável contador
return 0; // Encerra o programa com sucesso
