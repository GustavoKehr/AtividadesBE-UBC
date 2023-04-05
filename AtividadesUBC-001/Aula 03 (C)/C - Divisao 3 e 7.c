#include <stdio.h>
#include <locale.h>

	int main() {
		
		setlocale(LC_ALL, "portuguese");
		
		int X;
		
		printf("Numero: ");
		
		scanf("%d", &X);
		
		if (X % 3 == 0 &&  X % 7 == 0) {
			printf("%d e divisível por 3 e 7");
		}
		else printf("Erro");
return 0;		
}
