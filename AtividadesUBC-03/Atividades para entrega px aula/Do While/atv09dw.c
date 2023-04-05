#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float altura, soma, media;
	
	int i;
	
	i = 0;
	
	soma = 0;
	
	do {
		printf("Digite a altura da pessoa: ", i+1);
		scanf("%f",  &altura);
		
		soma += altura;
		i++;
		
	} while (i < 5);
	
	media = soma /5;
	
	printf("A média de altura das 5 pessoas é de: %.2f\n", media);
	
	return 0;
}
