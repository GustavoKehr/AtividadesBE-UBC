#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float altura, media, soma;
	
	int i;
	
	i = 0;
	
	while (i < 5) {
		printf("Digite a altura da pessoa (metros): ", i+1);
		scanf("%f", &altura);
		
		soma += altura;
		i++;
	}
	
	media = soma/5;
	printf("A m�dia de altura das 5 pessoas � de: %.2f", media);
	
return 0;
}
