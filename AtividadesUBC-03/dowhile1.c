#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, i, media;
	
	i = 1;
	
do {
	
	printf("Digite a primeira nota: ");
	scanf("%.2f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%.2f", &n2);
		
	media = (n1+n2)/2;
		
	printf("Sua média é de %.2f", media);
	
	i = i + 1;
		
	} while (i <= 3);
	
return 0;
}
