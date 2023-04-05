#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () 
{
	setlocale(LC_ALL,"portuguese");
	
	float salM, horasT, valorHT, imp, salB ,salL;
	
	printf("Digite o valor do salário mínimo: ");
	scanf("%f", &salM);
	
	printf("Digite as horas trabalhadas: ");
	scanf("%f", &horasT);
	
	valorHT = salM/2;
	
	salB = horasT*valorHT;
	
	imp = salB*0.03;
	
	salL = salB - imp;
	
	printf("Salário liquido: %.2f", salL);
	
}
