#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, m;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	
	m = (n1+n2)/2;
	
	printf("\n\nSua média é %.2f", m);
	
}
