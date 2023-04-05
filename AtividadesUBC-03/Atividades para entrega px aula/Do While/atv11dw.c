#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	float n1, n2, media, media_total;
	
	i = 1;
	
	media_total = 0;
	
	do {
		
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		
		media = (n1+n2)/2;
		
		printf("Sua média é de: %.2f\n", media);
		
		media_total += media;
		i++;
		
	} while (i <= 10);
	
	media_total = media_total/10;
	
	printf("A média total foi de: %2.f\n", media_total);
	
return 0;
}
