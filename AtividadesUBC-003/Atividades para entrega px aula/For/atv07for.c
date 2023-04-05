#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	
	float n1, n2, media;
	
	for (i = 1; i <= 10; i++) {
		printf("Digite sua primeira nota: ");
		scanf("%f", &n1);
		printf("Digite sua primeira nota: ");
		scanf("%f", &n2);
		
		media = (n1+n2)/2;
		printf("Média: %.2f\n", media);
	}
	
	return 0;
}
