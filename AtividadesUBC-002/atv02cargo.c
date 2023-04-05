#include <stdio.h>
#include <locale.h>

int main() 
{	//setar a localização dos caracteres "portuguese" posso utilizar caracteres brasileiros como acentos, ç entre outros
	setlocale(LC_ALL, "portuguese");
	//variável cargo
	int cargo;
	//mensagem pedindo para que digite o cargo
	printf("Digite um número relacionado ao cargo: ");
	//comando para ler a linha de escrita do úsuario
	scanf("%d", &cargo);
	//se o cargo for == 1 escreva escrituário 
	if(cargo == 1)
	{
		printf("Escrituário");
	}
	else
	{	//se o cargo for == 2 escreva Secretária
		if(cargo == 2)
		{
			printf("Secretária");
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
					{	//se o número digitado não for nenhum dos avaliados acima, escrever número inválido
						printf("Número de cargo inválido!!");
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
			case 1: printf("Escrituário");
			break;
			
			case 2: printf("Secretária");
			break;
			
			case 3: printf("Caixa");
			break;
			
			case 4: printf("Gerente");
			break;
			
			case 5: printf("Diretor");
			break;
		
			default: printf("Número de cargo inválido");
			break;
		}*/
