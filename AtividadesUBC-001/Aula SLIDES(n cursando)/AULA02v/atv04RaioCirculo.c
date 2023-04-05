#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float area, raio;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	area = 3.14*raio*raio;
	
	printf("O raio do circulo é: %.2f", area);
	
}
