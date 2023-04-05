/*Este código utiliza a estrutura de repetição do-while para ler e calcular a média de 10 pares de notas.*/

#include <stdio.h> // Inclusão da biblioteca stdio.h, responsável por permitir a entrada e saída de dados no console.
#include <locale.h> // Inclusão da biblioteca locale.h, responsável por definir a localidade usada no programa.

int main(){ // Função principal do programa, onde a execução do programa começa.

    setlocale(LC_ALL,"portuguese"); // Define a localidade do programa como "portuguese", o que significa que o programa usará o idioma português para a saída de texto.

    int i; // Declaração da variável i como um inteiro.
    float n1, n2, media; // Declaração das variáveis n1, n2 e media como float.

    do { // Início do laço de repetição do-while.

        printf("Digite sua primeira nota :"); // Exibe a mensagem "Digite sua primeira nota :" no console.
        scanf("%f", &n1); // Lê o valor informado pelo usuário para a variável n1.

        printf("Digite sua segunda nota : "); // Exibe a mensagem "Digite sua segunda nota :" no console.
        scanf("%f", &n2); // Lê o valor informado pelo usuário para a variável n2.

        media = (n1+n2)/2; // Calcula a média das duas notas informadas.
        printf("Media: %.2f\n", media); // Exibe a média das notas com duas casas decimais.

        i++; // Incrementa o valor da variável i em 1.

    } while (i <= 10); // Executa o bloco de código acima enquanto o valor da variável i for menor ou igual a 10.

    return 0; // Retorna o valor 0 para finalizar a execução do programa.
}



