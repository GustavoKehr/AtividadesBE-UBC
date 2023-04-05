#include <stdio.h>
#include <locale.h>

int main()
{
	//setar a localização dos caracteres "portuguese" posso utilizar caracteres brasileiros como acentos, ç entre outros
	setlocale(LC_ALL, "portuguese");
	//variáveis op, op1, op2, op3, op4, n1 e n2
	int op, op1, op2, op3, op4, n1, n2;
	//mensagem pedindo para que escolha a opção desejada
	printf("Escolha a opção a seguir\n\n");
	//mensagem pedindo para que escolha a soma
	printf("1 - Somar dois números\n");
	//mensagem pedindo para que escolha a multiplicação
	printf("2 - Multiplicar dois números\n");
	//mensagem pedindo para que escolha a subtração
	printf("3 - Subtrair dois números\n");
	//mensagem pedindo para que escolha a divisão
	printf("4 - Dividir dois números\n\n\n");
	//comando para ler a linha de escrita do úsuario
	scanf("%d", &op);
	//mensagem pedindo para que digite o primeiro número 
	printf("Digite o primeiro número:\n");
	//comando para ler a linha de escrita do úsuario
	scanf("%d", &n1);
	//mensagem pedindo para que digite o segundo número 
	printf("Digite o segundo número:\n");
	//comando para ler a linha de escrita do úsuario
	scanf("%d", &n2);
	
	//se a opção escolhida for == 1 fazer o calculo da soma
	if(op == 1)
	{
	op1 = n1+n2;
	printf("O resultado da some é de:  %d", op1);
	}
	else
	{	//se a opção escolhida for == 2 fazer o calculo da multiplicação
		if(op == 2)
		{
			op2 = n1*n2;
			printf("O resultado da multiplicação é de %d", op2);
		}
		else
		{	//se a opção escolhida for == 3 fazer o calculo da subtração
			if(op == 3)
			{
				op3 = n1-n2;
				printf("O resultado da subtração é de %d", op3);
			}
			else
			{	//se a opção escolhida for == 4 fazre o calculo da divisão
				if(op == 4)
				{
					op4 = n1/n2;
					printf("O resultado da divisão é de %d", op4);
				}
			}
		}
	}
return 0;
}
