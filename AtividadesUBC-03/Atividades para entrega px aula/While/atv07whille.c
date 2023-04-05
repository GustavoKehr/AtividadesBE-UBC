#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	
	float n1,n2,media;
	
	i = 1;
	
	
	while (i <= 10) {
	
		printf("Digite sua primeira nota: ");
		scanf("%f", &n1);
		printf("Digite sua segunda nota: ");
		scanf("%f", &n2);
		
		media = (n1+n2)/2;
		printf("Média: %.2f\n", media);
		
		(i++);
	}	
	
	return 0;
}
