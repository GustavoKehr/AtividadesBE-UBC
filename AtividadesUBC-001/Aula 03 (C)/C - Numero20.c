#include <stdio.h>
#include <locale.h>
	
	int main() {
		
		setlocale(LC_ALL, "portuguese");
		
		int N;
		
		printf("Número:   ");
		
		scanf("%d", &N); 
		
			if (N >= 20) {
				
				printf("Número maior ou igual a 20");
			}
			else printf("Número menor que 20");
return 0;
}
