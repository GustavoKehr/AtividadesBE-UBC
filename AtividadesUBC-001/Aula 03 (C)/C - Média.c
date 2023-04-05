#include <stdio.h>
#include <locale.h>

	int main() {
			
		setlocale(LC_ALL, "portuguese");
		
		int a, b, media;
		
		printf("Digite sua primeira nota: ");
		scanf("%d", &a);
		
		printf("Digite sua segunda nota: ");
		scanf ("%d", &b);
		
		media = (a+b)/2;
		
			if(media >= 5) {
				printf("Aprovado");
			}
			else printf("Reprovado");
return 0;	
}
