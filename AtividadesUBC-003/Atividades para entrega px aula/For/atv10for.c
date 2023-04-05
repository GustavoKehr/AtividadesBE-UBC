/**
C�digo que solicita ao usu�rio que digite 30 n�meros inteiros e, em seguida,
exibe a quantidade de n�meros pares digitados.
*/

#include <stdio.h> // Biblioteca padr�o de entrada e sa�da de dados em C
#include <locale.h> // Biblioteca para permitir a exibi��o de caracteres acentuados

int main () {

setlocale(LC_ALL, "portuguese"); // Define a localiza��o para portugu�s para a exibi��o de caracteres acentuados

int num, contador, i; // Declara��o das vari�veis num, contador e i, todas do tipo inteiro

i = 1; // Inicializa a vari�vel i com 1

contador = 0; // Inicializa a vari�vel contador com 0

for (i = 1; i <=30; i++){ // Loop for que se repete 30 vezes, come�ando do valor de i igual a 1 e terminando quando i for igual a 30
	
	printf("Digite um n�mero: "); // Exibe na tela a mensagem "Digite um n�mero: "
	scanf("%d", &num); // Solicita que o usu�rio digite um n�mero e armazena esse valor na vari�vel num
	
	if (num % 2 == 0) { // Verifica se o n�mero digitado � par, usando a opera��o de m�dulo (%), se o resto da divis�o de num por 2 for igual a 0, significa que num � par
		contador++; // Se o n�mero digitado for par, incrementa o valor da vari�vel contador em 1
	}
	
}	

printf("O quantidade de n�meros pares � de %d", contador); // Exibe a quantidade de n�meros pares digitados, armazenada na vari�vel contador
return 0; // Encerra o programa com sucesso
