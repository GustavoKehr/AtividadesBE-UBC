#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () 
{
	setlocale(LC_ALL,"portuguese");
	
	float salM, horasT, valorHT, imp, salB ,salL;
	
	printf("Digite o valor do sal�rio m�nimo: ");
	scanf("%f", &salM);
	
	printf("Digite as horas trabalhadas: ");
	scanf("%f", &horasT);
	
	valorHT = salM/2;
	
	salB = horasT*valorHT;
	
	imp = salB*0.03;
	
	salL = salB - imp;
	
	printf("Sal�rio liquido: %.2f", salL);
	
}
