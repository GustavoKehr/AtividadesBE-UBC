#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int num, contador, i;
	
	i = 1;
	
	contador = 0;
	
	while (i <= 30) {
		
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		
		if(num % 2 == 0) {
			contador++;
		}
		
		i++;
	}
	
	printf("A quantidade de n�meros pares � de: %d\n", contador);
	
return 0;
}
