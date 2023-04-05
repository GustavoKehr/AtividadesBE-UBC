#include <stdio.h>
#include <locale.h>

	int main () {
		
	setlocale(LC_ALL, "portuguese");
	
	int X;
	
		printf("Digite o número para o calculo");
		
		scanf("%d", &X);
		
			if(X % 3 == 0) {
				printf("%d é múltiplo de 3");
			}
			else printf("Não é múltiplo de 3");
return 0;	
}
