/**
C�digo que utiliza a estrutura de repeti��o "do-while" para ler um n�mero inteiro do usu�rio,
e em seguida, exibir na tela o seu antecessor e sucessor, repetindo essa opera��o por 5 vezes.
*/
#include <stdio.h> // Biblioteca padr�o de entrada e sa�da de dados em C
#include <locale.h> // Biblioteca para permitir a exibi��o de caracteres acentuados

int main(){

setlocale(LC_ALL,"portuguese"); // Define a localiza��o para portugu�s para a exibi��o de caracteres acentuados

int i, ant, suc; // Declara��o das vari�veis i (contador), ant (antecessor) e suc (sucessor), todas do tipo inteiro

i = 5; // Inicializa a vari�vel i com o valor 5

do {
	
	printf("Digite o n�mero para ganhar seu antecessor e seu sucessor: "); // Solicita ao usu�rio que digite um n�mero inteiro
	scanf("%d", &i); // L� o n�mero digitado pelo usu�rio e armazena na vari�vel i
	
	ant = i - 1; // Calcula o antecessor do n�mero digitado pelo usu�rio e armazena na vari�vel ant
	
	suc = i + 1; // Calcula o sucessor do n�mero digitado pelo usu�rio e armazena na vari�vel suc
	
	printf("Antecessor: %d, N�mero %d, Sucessor: %d\n", ant, i, suc); // Exibe na tela o antecessor, o n�mero digitado e o sucessor, separados por v�rgulas
	
	i++; // Incrementa a vari�vel i em 1 a cada itera��o, para repetir o processo por 5 vezes
	
} while (i <= 5); // Verifica se o valor da vari�vel i ainda � menor ou igual a 5, se sim, o bloco de c�digo dentro do "do" � executado novamente

return 0; // Encerra o programa com sucesso
}
