#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i; 
	
	float n1, n2, media, media_total;
	
	i = 1;
	
	media_total = 0;
	
	while (i <=10) {
		
		printf("Digite sua primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite sua segunda nota: ");
		scanf("%f", &n2);
		
		media = (n1+n2)/2;
		
		media_total = media_total + media;
		
		printf("A sua média foi de: %.2f\n", media);

		i++;
	}
	
	media_total = media_total/10;
	
	printf("A média total foi de: %.2f\n", media_total);
	
	return 0;
}

