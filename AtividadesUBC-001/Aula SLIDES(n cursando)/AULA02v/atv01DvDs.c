#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float valor = 5.50;
	
	float total = valor * 3;
	
	printf("O valor total da sua compra de DVDs fica %.2f", total);
	
}
