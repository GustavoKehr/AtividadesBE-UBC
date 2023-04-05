/*Esse código é um programa em C que solicita ao usuário 30 números e conta quantos deles são pares. 
Ele utiliza uma estrutura de repetição do-while para solicitar cada número e a variável contador para contar quantos números pares foram digitados. 
A variável i é utilizada para controlar o número de números que foram digitados. A condição if verifica se o número é par e, caso seja, incrementa a variável contador em 1. 
Por fim, a quantidade de números pares é exibida no console
*/

#include <stdio.h> 
#include <locale.h> 

int main () { // Função principal do programa, onde a execução do programa começa.

    setlocale(LC_ALL, "portuguese"); // Define a localidade do programa como "portuguese", o que significa que o programa usará o idioma português para a saída de texto.

    int num, i, contador; // Declaração das variáveis num, i e contador como números inteiros.

    contador = 0; // Inicialização da variável contador com o valor 0.
    i = 1; // Inicialização da variável i com o valor 1.

    do { // Início do laço de repetição do-while.

        printf("Digite um número: "); // Exibe uma mensagem solicitando ao usuário que digite um número.
        scanf("%d", &num); // Lê o valor digitado pelo usuário e armazena na variável num.

        if (num % 2 == 0) { // Verifica se o número é par.
            contador++; // Incrementa a variável contador em 1 caso o número seja par.
        }

        i++; // Incrementa a variável i em 1.

    } while (i <= 30); // Executa o bloco de código acima enquanto o valor da variável i for menor ou igual a 30.

    printf("A quantidade de números pares é de: %d\n", contador); // Exibe a quantidade de números pares no console.

    return 0; // Retorna o valor 0 para finalizar a execução do programa.
}

