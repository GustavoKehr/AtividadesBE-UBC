#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "portuguese");
		
		int a, b, c, d, media;
		
		printf("Digite sua primeira nota: ");
		scanf("%d", &a);
		
		printf("Digite sua segunda nota: ");
		scanf ("%d", &b);
		
		printf("Digite sua terceira nota: ");
		scanf("%d", &c);
		
		printf("Digite sua quarta nota: w");
		scanf("%d", &d);
		
		media = (a + b + c + d)/4;
		
			if(media >= 5) {
				
				printf("Aprovado");
			}
			else printf("Reprovado");
	return 0;
	}
	
