/*Esse código é um programa em C que solicita ao usuário a altura de 5 pessoas e calcula a média de altura delas. 
Ele utiliza uma estrutura de repetição do-while para solicitar a altura de cada pessoa e as variáveis altura e soma para armazenar as alturas e somá-las, respectivamente. 
A variável i é utilizada para controlar o número de alturas que foram lidas e a variável media é utilizada para armazenar o resultado da média de altura. 
Por fim, a média é exibida no console com 2 casas decimais
*/

#include <stdio.h> 
#include <locale.h> 

int main(){ // Função principal do programa, onde a execução do programa começa.

    setlocale(LC_ALL,"portuguese"); // Define a localidade do programa como "portuguese", o que significa que o programa usará o idioma português para a saída de texto.

    float altura, soma, media; // Declaração das variáveis altura, soma e media como números reais (float).
    int i; // Declaração da variável i como um número inteiro (int).

    i = 0; // Inicialização da variável i com o valor 0.
    soma = 0; // Inicialização da variável soma com o valor 0.

    do { // Início do laço de repetição do-while.

        printf("Digite a altura da pessoa: ", i+1); // Exibe uma mensagem solicitando ao usuário que digite a altura da pessoa.
        scanf("%f",  &altura); // Lê o valor da altura digitado pelo usuário e armazena na variável altura.

        soma += altura; // Adiciona o valor da altura à variável soma.
        i++; // Incrementa o valor da variável i em 1.

    } while (i < 5); // Executa o bloco de código acima enquanto o valor da variável i for menor do que 5.

    media = soma / 5; // Calcula a média de altura das 5 pessoas.

    printf("A média de altura das 5 pessoas é de: %.2f\n", media); // Exibe a média de altura no console.

    return 0; // Retorna o valor 0 para finalizar a execução do programa.
}

