/*Este c�digo utiliza a estrutura de repeti��o do-while para ler e calcular a m�dia de 10 pares de notas.*/

#include <stdio.h> // Inclus�o da biblioteca stdio.h, respons�vel por permitir a entrada e sa�da de dados no console.
#include <locale.h> // Inclus�o da biblioteca locale.h, respons�vel por definir a localidade usada no programa.

int main(){ // Fun��o principal do programa, onde a execu��o do programa come�a.

    setlocale(LC_ALL,"portuguese"); // Define a localidade do programa como "portuguese", o que significa que o programa usar� o idioma portugu�s para a sa�da de texto.

    int i; // Declara��o da vari�vel i como um inteiro.
    float n1, n2, media; // Declara��o das vari�veis n1, n2 e media como float.

    do { // In�cio do la�o de repeti��o do-while.

        printf("Digite sua primeira nota :"); // Exibe a mensagem "Digite sua primeira nota :" no console.
        scanf("%f", &n1); // L� o valor informado pelo usu�rio para a vari�vel n1.

        printf("Digite sua segunda nota : "); // Exibe a mensagem "Digite sua segunda nota :" no console.
        scanf("%f", &n2); // L� o valor informado pelo usu�rio para a vari�vel n2.

        media = (n1+n2)/2; // Calcula a m�dia das duas notas informadas.
        printf("Media: %.2f\n", media); // Exibe a m�dia das notas com duas casas decimais.

        i++; // Incrementa o valor da vari�vel i em 1.

    } while (i <= 10); // Executa o bloco de c�digo acima enquanto o valor da vari�vel i for menor ou igual a 10.

    return 0; // Retorna o valor 0 para finalizar a execu��o do programa.
}



