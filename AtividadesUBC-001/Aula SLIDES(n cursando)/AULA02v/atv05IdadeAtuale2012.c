#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int anoA, anoN, idade, idade2012;
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoA);	
	
	printf("Digite o ano do seu ano de nascimento: ");
	scanf("%d", &anoN);
	
	idade = anoA - anoN;
	
	idade2012 = 2012 - anoN;
	
	printf("A idade que vc tem atualmente é de %d\n\nA idade que vc tem em 2012 é de: %d", idade, idade2012);

return 0;
}
