#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float sal, nsal, tax, aum;
	
	printf("Digite seu sal�rio: ");
	scanf("%f", &sal);
	
	printf("Digite a taxa: ");
	scanf("%f", &tax);
	
	aum = sal*tax/100;
	
	nsal = sal + aum;
	
	printf("\n\nSeu aumento � de: %.2f\nSeu novo sal�rio � de: %.2f" , aum, nsal);
	
return 0;
}
