#include <stdio.h>
#include <locale.h>

int main () {
	
	int i;
	
	float n1, n2, media, media_total;
	
	i = 1;
	
	media_total = 0;
	
	for(i = 1; i <= 10; i++) {
		
		printf("Digite sua primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite sua segunda nota: ");
		scanf("%f", &n2);
		
		media = (n1+n2)/2;
		
		printf("Sua média foi de: %.2f\n", media);
		
		media_total += media;	
	}
	
	media_total = media_total/10;
	
	printf("A média total foi de: %2.f\n", media_total);
	
return  0;
}
