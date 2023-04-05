#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[50], cpf[11];

	float renda_Anual, renda_Liquida, aliquota, desconto, imposto;
	
	int num_Dependente;
	
	printf("Escreva seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite seu cpf (sem hífens, nem pontos): ");
	scanf("%s", &cpf);
	
	printf("Digite sua renda anual: ");
	scanf("%f", &renda_Anual);
	
	printf("Digite o número de dependentes: ");
	scanf("%d", &num_Dependente);
	
	desconto = 110 * num_Dependente;
	
	renda_Liquida = renda_Anual - desconto;
	
	if(renda_Liquida <= 800)
	{
		
		aliquota = 0.0;
		
	}
	else
	{
		
		if(renda_Liquida <= 4000)
		{
			
			aliquota = 2.5 / 100;
			
		}
		else
		{
			
		 if(renda_Liquida <= 9000)
		{
			
			aliquota = 5.0 / 100;
				
		}
		else 
		{
				
			aliquota = 10.0 / 100;
				
		}
		
		}
	}
			
	if(aliquota == 0)
	{
		
		printf("\n\nNome: %s\nCPF: %s\nRenda Anual: %.2f\nNúmero de dependentes: %d\n\nCom base no cálculo o contribuinte esta isento de imposto.", nome, cpf, renda_Anual, num_Dependente);
		
	}
	else
	{
		
		imposto = renda_Liquida * aliquota;
		
		printf("\n\nNome: %s\nCPF: %s\nRenda Anual: %.2f\nNúmero de dependentes: %d\nImposto: %.2f", nome, cpf, renda_Anual, num_Dependente, imposto);
		
	}

	return 0;
}
