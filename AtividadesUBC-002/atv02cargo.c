#include <stdio.h>
#include <locale.h>

int main() 
{	//setar a localiza��o dos caracteres "portuguese" posso utilizar caracteres brasileiros como acentos, � entre outros
	setlocale(LC_ALL, "portuguese");
	//vari�vel cargo
	int cargo;
	//mensagem pedindo para que digite o cargo
	printf("Digite um n�mero relacionado ao cargo: ");
	//comando para ler a linha de escrita do �suario
	scanf("%d", &cargo);
	//se o cargo for == 1 escreva escritu�rio 
	if(cargo == 1)
	{
		printf("Escritu�rio");
	}
	else
	{	//se o cargo for == 2 escreva Secret�ria
		if(cargo == 2)
		{
			printf("Secret�ria");
		}
		else
		{	//se o cargo for == 3 escreva Caixa
			if(cargo == 3)
			{
				printf("Caixa");
			}
			else
			{	//se o cargo for == 4 escreva Gerente
				if (cargo == 4)
				{
					printf("Gerente");
				}
				else
				{	//se o cargo for == 5 escreva Diretor
					if (cargo == 5)
					{
						printf("Diretor");
					}
					else 
					{	//se o n�mero digitado n�o for nenhum dos avaliados acima, escrever n�mero inv�lido
						printf("N�mero de cargo inv�lido!!");
					}
				}
			}
		}
	}	
return 0;	
}

//EM SWITCH CASE
/*int cargo;
	
		setlocale(LC_ALL, "portuguese");
	
		printf("Digite um numero referente ao cargo: ");
		scanf("%d", &cargo);
		
		switch(cargo)
		{
			case 1: printf("Escritu�rio");
			break;
			
			case 2: printf("Secret�ria");
			break;
			
			case 3: printf("Caixa");
			break;
			
			case 4: printf("Gerente");
			break;
			
			case 5: printf("Diretor");
			break;
		
			default: printf("N�mero de cargo inv�lido");
			break;
		}*/
