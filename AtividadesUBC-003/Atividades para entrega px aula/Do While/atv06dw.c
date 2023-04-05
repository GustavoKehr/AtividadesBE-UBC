#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, ant, suc;
	
	i = 5;
	
	do {
		
		printf("Digite o número para ganhar seu antecessor e seu sucessor: ");
		scanf("%d", &i);
		
		ant = i - 1;
		
		suc = i + 1;
		
		printf("Antecessor: %d, Número %d, Sucessor: %d\n", ant, i, suc);
		
		i++;
		
	} while (i <= 5);
		
	
	return 0;
}
