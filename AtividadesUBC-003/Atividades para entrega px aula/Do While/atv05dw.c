/**
C�digo que utiliza a estrutura de repeti��o "do-while" para exibir na tela
os n�meros pares de 2 a 20, incrementando de 2 em 2 a cada itera��o.
*/
#include <stdio.h> // Biblioteca padr�o de entrada e sa�da de dados em C
#include <locale.h> // Biblioteca para permitir a exibi��o de caracteres acentuados

int main(){

setlocale(LC_ALL,"portuguese"); // Define a localiza��o para portugu�s para a exibi��o de caracteres acentuados

int i; // Declara��o da vari�vel i, do tipo inteiro

i = 2; // Inicializa a vari�vel i com 2

do {
	
	printf("Os n�meros pares s�o: %d\n", i); // Exibe na tela o valor atual da vari�vel i, que representa os n�meros pares de 2 a 20
	
	i = i + 2; // Incrementa o valor da vari�vel i em 2 a cada itera��o, para avan�ar para o pr�ximo n�mero par
	
} while (i <= 20); // Verifica se o valor da vari�vel i ainda � menor ou igual a 20, se sim, o bloco de c�digo dentro do "do" � executado novamente

return 0; // Encerra o programa com sucesso
}
