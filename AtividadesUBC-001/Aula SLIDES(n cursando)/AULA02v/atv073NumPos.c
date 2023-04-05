#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	float a,b,c,d,r,s;
	
	printf("Digite um número para variável A: ");
	scanf("%f", &a);
	
	printf("Digite um número para variável B: ");
	scanf("%f", &b);
	
	printf("Digite um número para variável C: ");
	scanf("%f", &c);
	
	r = (a+b)*(a+b);
	
	s = (b+c)*(b+c);
	
	d = (r+s)/2;
	
	printf("O valor de D é: %.2f", d);
	
return 0;
}
