#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int x, y, aux;
	
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	
	printf("Digite o valor de Y: ");
	scanf("%d", &y);
	
	aux = x;
	
	x = y;
	
	y = aux;
	
	printf("o valor das variáveis x e y são X: %d Y: %d", x, y);	

return 0;
}
