#include <stdio.h>
#include <locale.h>

	int main () {
		
	setlocale(LC_ALL, "portuguese");
	
	int X;
	
		printf("Digite o n�mero para o calculo");
		
		scanf("%d", &X);
		
			if(X % 3 == 0) {
				printf("%d � m�ltiplo de 3");
			}
			else printf("N�o � m�ltiplo de 3");
return 0;	
}
