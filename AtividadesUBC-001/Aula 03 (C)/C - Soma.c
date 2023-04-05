#include <stdio.h>
#include <locale.h>
	
	int main() {
		
		setlocale(LC_ALL, "portuguese");
		
		int a, b, soma;
		
		printf("Digite a soma: ");
		
		scanf("%d", &a);
		
		scanf("%d", &b);
		
		soma = a+b;
		
		if(soma > 10){
			printf("%d", soma);
		}
		else printf("Erro");
		
return 0;		
}
