#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float altura, soma, media;
	
	int i;
	
	soma = 0;
	
	for (i = 0; i < 5; i++) {
		printf("Digite a altura da pessoa (metros): ", i+1);
		scanf("%f", &altura);
		
		soma += altura;
	}
	
	media = soma /5;
	printf("A média de altura das 5 pessoas é de: %.2f", media);

return 0;
}
