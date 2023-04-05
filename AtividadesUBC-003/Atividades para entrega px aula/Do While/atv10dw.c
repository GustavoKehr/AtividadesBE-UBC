/*Esse c�digo � um programa em C que solicita ao usu�rio 30 n�meros e conta quantos deles s�o pares. 
Ele utiliza uma estrutura de repeti��o do-while para solicitar cada n�mero e a vari�vel contador para contar quantos n�meros pares foram digitados. 
A vari�vel i � utilizada para controlar o n�mero de n�meros que foram digitados. A condi��o if verifica se o n�mero � par e, caso seja, incrementa a vari�vel contador em 1. 
Por fim, a quantidade de n�meros pares � exibida no console
*/

#include <stdio.h> 
#include <locale.h> 

int main () { // Fun��o principal do programa, onde a execu��o do programa come�a.

    setlocale(LC_ALL, "portuguese"); // Define a localidade do programa como "portuguese", o que significa que o programa usar� o idioma portugu�s para a sa�da de texto.

    int num, i, contador; // Declara��o das vari�veis num, i e contador como n�meros inteiros.

    contador = 0; // Inicializa��o da vari�vel contador com o valor 0.
    i = 1; // Inicializa��o da vari�vel i com o valor 1.

    do { // In�cio do la�o de repeti��o do-while.

        printf("Digite um n�mero: "); // Exibe uma mensagem solicitando ao usu�rio que digite um n�mero.
        scanf("%d", &num); // L� o valor digitado pelo usu�rio e armazena na vari�vel num.

        if (num % 2 == 0) { // Verifica se o n�mero � par.
            contador++; // Incrementa a vari�vel contador em 1 caso o n�mero seja par.
        }

        i++; // Incrementa a vari�vel i em 1.

    } while (i <= 30); // Executa o bloco de c�digo acima enquanto o valor da vari�vel i for menor ou igual a 30.

    printf("A quantidade de n�meros pares � de: %d\n", contador); // Exibe a quantidade de n�meros pares no console.

    return 0; // Retorna o valor 0 para finalizar a execu��o do programa.
}

