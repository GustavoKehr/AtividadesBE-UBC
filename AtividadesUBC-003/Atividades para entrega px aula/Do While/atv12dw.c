/*Este código em linguagem C tem como objetivo ler notas de alunos em uma turma e contabilizar quantos foram aprovados, quantos foram para exame e quantos foram reprovados.
*/

#include <stdio.h>
#include <locale.h>

int main(){ // Função principal do programa, onde a execução do programa começa.
	
	// Define o idioma para o português
	setlocale(LC_ALL,"portuguese");
	
	// Declaração das variáveis
	int apr, rep, exa, i = 1;
	float n1, n2, media;
	
	// Inicialização das variáveis de contagem
	apr = 0;
	rep = 0;
	exa = 0;
	
	// Loop para ler notas e contabilizar alunos
	do {
		// Solicita e lê as notas
		printf("Digite a sua primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite sua segunda nota: ");
		scanf("%f", &n2);
		
		// Calcula a média das notas
		media = (n1 + n2) / 2;
		
		// Classifica o aluno com base na média
		if(media >= 5) {
			apr += 1; // Se a média for maior ou igual a 5, o aluno é aprovado
		} 
		else {
			if(media < 3) {
				rep += 1; // Se a média for menor que 3, o aluno é reprovado
			}
			else {
				exa += 1; // Se a média for maior ou igual a 3 e menor que 5, o aluno vai para exame
			}
		}
		i++; // Incrementa o contador
	} while (i <= 60); // O loop executa 60 vezes, uma vez para cada aluno na turma
	
	// Exibe o número de alunos aprovados, reprovados e em exame
	printf("Alunos aprovados: %d\n Alunos exames: %d\n Alunos reprovados: %d", apr, exa, rep);
	
	return 0; // Indica que o programa foi executado com sucesso
}

