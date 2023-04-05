#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
		
	float n1, n2, media;
	
	do {
		printf("Digite sua primeira nota :");
		scanf("%f", &n1);
		
		printf("Digite sua segunda nota : ");
		scanf("%f", &n2);
		
		media = (n1+n2)/2;
		printf("Media: %.2f\n", media);
		
		i++;
		
	} while (i <= 10);
	
	return 0;
}
