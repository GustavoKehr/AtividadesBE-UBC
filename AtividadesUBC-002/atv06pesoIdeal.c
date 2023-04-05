#include <stdio.h>
#include <locale.h>

	int main()
{
	//setar a localização dos caracteres "portuguese" posso utilizar caracteres brasileiros como acentos, ç entre outros
	setlocale(LC_ALL, "portuguese");
	//variavel em string sexo
	char sexo;
	//variavel em float altura, homem e mulher
	float altura, pesoIhomem, pesoImulher;
	//mensagem pedindo para que digite o sexo
	printf("Digite seu sexo: ");
	//comando para ler a linha de escrita do úsuario
	scanf("%c", &sexo);
	
	//se o sexo digitado for igual a F ou M realizar os calculos para definir o peso ideal pelo peso passado
	if((sexo == 'F') || (sexo == 'f') || (sexo == 'M') || (sexo == 'm')){
		
		printf("Digite sua altura usando vírgula: ");
		scanf("%f", &altura);
		
		if((sexo == 'F') || (sexo == 'f')){
			
			pesoImulher = (62.1 * altura) - 44.7;
			
			printf("Peso ideal: %.2f", pesoImulher);
		}
		else{
			
			pesoIhomem= (72.7 * altura) - 58;
			
			printf("Peso ideal %.2f", pesoIhomem);
			
		}
		
	}
	
	else{
		
		printf("Valor inválido");
		
	}
return 0;
}
