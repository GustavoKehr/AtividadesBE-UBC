/*Esse código é um programa em C que realiza a soma dos números de 1 a 10 e exibe o resultado no console. 
Ele utiliza uma estrutura de repetição do-while para realizar a soma e a variável i para iterar os números de 1 a 10. 
A variável soma é utilizada para armazenar o resultado da soma dos números iterados e é exibida no console a cada iteração do laço.
*/
#include <stdio.h> // Inclusão da biblioteca stdio.h, responsável por permitir a entrada e saída de dados no console.
#include <locale.h> // Inclusão da biblioteca locale.h, responsável por definir a localidade usada no programa.

int main(){ // Função principal do programa, onde a execução do programa começa.

    setlocale(LC_ALL,"portuguese"); // Define a localidade do programa como "portuguese", o que significa que o programa usará o idioma português para a saída de texto.

    int i, soma; // Declaração das variáveis i e soma como inteiros.

    i = 1; // Inicialização da variável i com o valor 1.
    soma = 0; // Inicialização da variável soma com o valor 0.

    do{ // Início do laço de repetição do-while.

        soma = soma + i; // Adiciona o valor de i à variável soma.
        printf("%d\n\n", soma); // Exibe o valor atual da variável soma no console.

        i = i + 1; // Incrementa o valor da variável i em 1.

    }while(i <= 10); // Executa o bloco de código acima enquanto o valor da variável i for menor ou igual a 10.

    return 0; // Retorna o valor 0 para finalizar a execução do programa.
}

