#include <stdio.h>
#include <locale.h>

int main()
{
	//setar a localiza��o dos caracteres "portuguese" posso utilizar caracteres brasileiros como acentos, � entre outros
	setlocale(LC_ALL, "portuguese");
	//vari�veis op, op1, op2, op3, op4, n1 e n2
	int op, op1, op2, op3, op4, n1, n2;
	//mensagem pedindo para que escolha a op��o desejada
	printf("Escolha a op��o a seguir\n\n");
	//mensagem pedindo para que escolha a soma
	printf("1 - Somar dois n�meros\n");
	//mensagem pedindo para que escolha a multiplica��o
	printf("2 - Multiplicar dois n�meros\n");
	//mensagem pedindo para que escolha a subtra��o
	printf("3 - Subtrair dois n�meros\n");
	//mensagem pedindo para que escolha a divis�o
	printf("4 - Dividir dois n�meros\n\n\n");
	//comando para ler a linha de escrita do �suario
	scanf("%d", &op);
	//mensagem pedindo para que digite o primeiro n�mero 
	printf("Digite o primeiro n�mero:\n");
	//comando para ler a linha de escrita do �suario
	scanf("%d", &n1);
	//mensagem pedindo para que digite o segundo n�mero 
	printf("Digite o segundo n�mero:\n");
	//comando para ler a linha de escrita do �suario
	scanf("%d", &n2);
	
	//se a op��o escolhida for == 1 fazer o calculo da soma
	if(op == 1)
	{
	op1 = n1+n2;
	printf("O resultado da some � de:  %d", op1);
	}
	else
	{	//se a op��o escolhida for == 2 fazer o calculo da multiplica��o
		if(op == 2)
		{
			op2 = n1*n2;
			printf("O resultado da multiplica��o � de %d", op2);
		}
		else
		{	//se a op��o escolhida for == 3 fazer o calculo da subtra��o
			if(op == 3)
			{
				op3 = n1-n2;
				printf("O resultado da subtra��o � de %d", op3);
			}
			else
			{	//se a op��o escolhida for == 4 fazre o calculo da divis�o
				if(op == 4)
				{
					op4 = n1/n2;
					printf("O resultado da divis�o � de %d", op4);
				}
			}
		}
	}
return 0;
}
