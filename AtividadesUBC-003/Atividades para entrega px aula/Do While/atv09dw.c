/*Esse c�digo � um programa em C que solicita ao usu�rio a altura de 5 pessoas e calcula a m�dia de altura delas. 
Ele utiliza uma estrutura de repeti��o do-while para solicitar a altura de cada pessoa e as vari�veis altura e soma para armazenar as alturas e som�-las, respectivamente. 
A vari�vel i � utilizada para controlar o n�mero de alturas que foram lidas e a vari�vel media � utilizada para armazenar o resultado da m�dia de altura. 
Por fim, a m�dia � exibida no console com 2 casas decimais
*/

#include <stdio.h> 
#include <locale.h> 

int main(){ // Fun��o principal do programa, onde a execu��o do programa come�a.

    setlocale(LC_ALL,"portuguese"); // Define a localidade do programa como "portuguese", o que significa que o programa usar� o idioma portugu�s para a sa�da de texto.

    float altura, soma, media; // Declara��o das vari�veis altura, soma e media como n�meros reais (float).
    int i; // Declara��o da vari�vel i como um n�mero inteiro (int).

    i = 0; // Inicializa��o da vari�vel i com o valor 0.
    soma = 0; // Inicializa��o da vari�vel soma com o valor 0.

    do { // In�cio do la�o de repeti��o do-while.

        printf("Digite a altura da pessoa: ", i+1); // Exibe uma mensagem solicitando ao usu�rio que digite a altura da pessoa.
        scanf("%f",  &altura); // L� o valor da altura digitado pelo usu�rio e armazena na vari�vel altura.

        soma += altura; // Adiciona o valor da altura � vari�vel soma.
        i++; // Incrementa o valor da vari�vel i em 1.

    } while (i < 5); // Executa o bloco de c�digo acima enquanto o valor da vari�vel i for menor do que 5.

    media = soma / 5; // Calcula a m�dia de altura das 5 pessoas.

    printf("A m�dia de altura das 5 pessoas � de: %.2f\n", media); // Exibe a m�dia de altura no console.

    return 0; // Retorna o valor 0 para finalizar a execu��o do programa.
}

