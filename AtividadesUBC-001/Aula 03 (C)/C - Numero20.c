#include <stdio.h>
#include <locale.h>
	
	int main() {
		
		setlocale(LC_ALL, "portuguese");
		
		int N;
		
		printf("N�mero:   ");
		
		scanf("%d", &N); 
		
			if (N >= 20) {
				
				printf("N�mero maior ou igual a 20");
			}
			else printf("N�mero menor que 20");
return 0;
}
