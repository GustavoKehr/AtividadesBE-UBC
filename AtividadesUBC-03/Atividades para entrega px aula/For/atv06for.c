#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i = 5;
	
	for (i = 0; i < 5; i++) {
		
		int ant, suc;
			
		printf("Digite um n�mero: ");
		scanf("%d", &i);
		
		ant = i - 1;
		
		suc = i + 1;
		
		printf("Antecessor: %d, N�mero: %d, Sucessor %d\n", ant, i, suc);
	}
	
	return 0;
}
