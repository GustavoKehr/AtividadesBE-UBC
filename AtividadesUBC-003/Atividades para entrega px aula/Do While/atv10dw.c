#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int num, i, contador;

	contador = 0;
	
	i = 1;
	
	do {
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		
		if (num % 2 == 0) {
			contador++;
		}
		
		i++;
		
	} while (i <= 30);
	
	printf("A quantidade de n�meros pares � de: %d\n", contador);
	
}
