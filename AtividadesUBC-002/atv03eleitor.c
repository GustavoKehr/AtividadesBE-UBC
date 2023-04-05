#include <stdio.h>
#include <locale.h>

int main()
{
	//variável idade
	int idade;
	
	//setar a localização dos caracteres "portuguese" posso utilizar caracteres brasileiros como acentos, ç entre outros
	setlocale(LC_ALL, "portuguese");
	//mensagem pedindo para que digite a idade
	printf("Digite sua idade: ");
	//comando para ler a linha de escrita do úsuario
	scanf("%d", &idade);
	//se a idade for menor que 16 escrever que não pode ser eleitor
	if(idade < 16)
	{
		printf("Não vote ser eleitor ainda não!!");
	}
	else
	{	//se a idade for >- 18 && <=65 dizer que ele é obrigado a ser um eleitor
		if((idade >= 18) && (idade <= 65))
		{
			printf("Eleitor obrigatório!!");
		}
		else
		{	//se a didade for >= 16 && <= 18 && > 65 dizer que ele é um eleitor facultativo
		if((idade >= 16) && (idade < 18) && (idade > 65));
		printf("Eleitor facultativo!!");
		}
	}
	

return 0;	
}
