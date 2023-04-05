#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, ant, suc;
	
	i = 0;
	
	while (i < 5) {
		
		printf("Digite um número: ");
		scanf("%d", &i);
		
		ant = i - 1;
		
		suc = i + 1;
		
		printf("Antecessor: %d, Número: %d Sucessor: %d", ant, i, suc);
		
		i++;
	}	
	
	return 0;
}
