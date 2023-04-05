#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, i, media;
	
	
	for (i = 1; i <= 3; i++) {
		printf("Digite a primeira nota: ", n1);
		scanf("Nota 1: %.2f", &n1);
		printf("Digite a primeiro nota: ", n2);
		scanf("Nota 2: %.2f", &n2);
		
		media = (n1+n2)/2;
		
		printf("\n%.2f\n\n", media);
		
	}
return 0;
}
