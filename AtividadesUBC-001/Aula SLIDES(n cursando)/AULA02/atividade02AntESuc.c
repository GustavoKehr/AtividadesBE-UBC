#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int num, ant, suc;
	
	printf("Digite um numero e logo ap�s digite novamente: ");
	
	scanf("%d", &num);
	
	ant = num - 1;
	
	suc = num + 1;
	
	printf("\n\nN�mero: %d", num);
	printf("\nAntecessor: %d", ant);
	printf("\nSucessor: %d", suc);
	
return 0;
}
