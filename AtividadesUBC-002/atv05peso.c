#include <stdio.h>
#include <locale.h>

int main()
{
	//setar a localiza��o dos caracteres "portuguese" posso utilizar caracteres brasileiros como acentos, � entre outros
	setlocal(LC_ALL, "portuguese");
	//vari�veis peso, excesso e multa
	float peso, excesso, multa;
	//mensagem pedindo para que digite o peso do saco de peixes
	printf("Digite o peso dos peixes: ");
	//comando para ler a linha de escrita do �suario
	scanf("%f", &peso);
	//se o peso for > 50 fazer o calculo abaixo da multa de 4$ por quilo excedente
	if(peso > 50)
	{
		excesso = peso - 50;
		
		multa = excesso*4.0;
		//mensagem avisando do excesso e a multa
		printf("Excesso:%.2f\nMulta:%.2f\n", excesso, multa);
	}
	else
	{	//se o excesso for < 50 n�o havera calculo pois n�o devera pagar a multa de excesso de peso

		excesso = 0;
		
		multa = 0;
		
		printf("Excesso:%.2f\nMulta:%.2f\n", excesso, multa);
	}
return 0;
}
