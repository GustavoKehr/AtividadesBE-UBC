#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () 
{
	
	setlocale(LC_ALL, "portuguese");
	
	float pesoKg, pesoG, consGato1, consGato2, consTotal, resto;
	
	printf("Digite o peso do saco de ra��o em kilos: ");
	scanf("%f", &pesoKg);
		
	printf("Digite o valor consumido de ra��o em gramas pelo primeiro gato em um dia!: ");
	scanf("%f", &consGato1);
	
	printf("Digite o valor consumido de ra��o em gramas pelo segundo gato em um dia!: ");
	scanf("%f", &consGato2);
	
	pesoG = pesoKg*1000;
	
	consTotal = 5*(consGato1 + consGato2);
	
	resto = pesoG - consTotal;
	
	printf("O restante de ra��o no saco � de: %.2f gramas", resto);
	
return 0;
}
