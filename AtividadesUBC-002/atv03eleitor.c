#include <stdio.h>
#include <locale.h>

int main()
{
	//vari�vel idade
	int idade;
	
	//setar a localiza��o dos caracteres "portuguese" posso utilizar caracteres brasileiros como acentos, � entre outros
	setlocale(LC_ALL, "portuguese");
	//mensagem pedindo para que digite a idade
	printf("Digite sua idade: ");
	//comando para ler a linha de escrita do �suario
	scanf("%d", &idade);
	//se a idade for menor que 16 escrever que n�o pode ser eleitor
	if(idade < 16)
	{
		printf("N�o vote ser eleitor ainda n�o!!");
	}
	else
	{	//se a idade for >- 18 && <=65 dizer que ele � obrigado a ser um eleitor
		if((idade >= 18) && (idade <= 65))
		{
			printf("Eleitor obrigat�rio!!");
		}
		else
		{	//se a didade for >= 16 && <= 18 && > 65 dizer que ele � um eleitor facultativo
		if((idade >= 16) && (idade < 18) && (idade > 65));
		printf("Eleitor facultativo!!");
		}
	}
	

return 0;	
}
