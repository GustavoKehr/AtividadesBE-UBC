#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int num, contador, i;
	
	i = 1;
	
	contador = 0;
	
	for (i = 1; i <=30; i++){
		
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		
		if (num % 2 == 0) {
			contador++;
		}
		
	}	
		printf("O quantidade de n�meros pares � de %d", contador);
return 0;
}

	

