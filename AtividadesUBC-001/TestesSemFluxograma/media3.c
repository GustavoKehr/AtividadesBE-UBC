#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3, m;
	
	printf("Digite sua primeira nota: ");
	scanf("%d", &n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%d", &n2);
	
	printf("Digite sua terceira nota: ");
	scanf("%d", &n3);
	
	m = (n1 + n2 + n3)/3;
	
	
	if(m >= 6) {
		
		printf("\e[1;1H\e[2J"); 
		printf("Vc foi aprovado!!\nSua m�dia foi de %d", m);
		
	}
	else printf("Vc foi reprovado!!\nSua m�dia foi de %d\nNota necess�ria para aprova��o => 6", m);
	
}
