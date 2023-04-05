/*Esse c�digo � um programa em C que realiza a soma dos n�meros de 1 a 10 e exibe o resultado no console. 
Ele utiliza uma estrutura de repeti��o do-while para realizar a soma e a vari�vel i para iterar os n�meros de 1 a 10. 
A vari�vel soma � utilizada para armazenar o resultado da soma dos n�meros iterados e � exibida no console a cada itera��o do la�o.
*/
#include <stdio.h> // Inclus�o da biblioteca stdio.h, respons�vel por permitir a entrada e sa�da de dados no console.
#include <locale.h> // Inclus�o da biblioteca locale.h, respons�vel por definir a localidade usada no programa.

int main(){ // Fun��o principal do programa, onde a execu��o do programa come�a.

    setlocale(LC_ALL,"portuguese"); // Define a localidade do programa como "portuguese", o que significa que o programa usar� o idioma portugu�s para a sa�da de texto.

    int i, soma; // Declara��o das vari�veis i e soma como inteiros.

    i = 1; // Inicializa��o da vari�vel i com o valor 1.
    soma = 0; // Inicializa��o da vari�vel soma com o valor 0.

    do{ // In�cio do la�o de repeti��o do-while.

        soma = soma + i; // Adiciona o valor de i � vari�vel soma.
        printf("%d\n\n", soma); // Exibe o valor atual da vari�vel soma no console.

        i = i + 1; // Incrementa o valor da vari�vel i em 1.

    }while(i <= 10); // Executa o bloco de c�digo acima enquanto o valor da vari�vel i for menor ou igual a 10.

    return 0; // Retorna o valor 0 para finalizar a execu��o do programa.
}

