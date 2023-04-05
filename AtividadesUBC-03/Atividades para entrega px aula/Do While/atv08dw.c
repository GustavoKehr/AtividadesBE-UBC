#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, soma;
	
	i = 1;
	
	soma = 0;
	
	do{
		
	soma = soma + i;
	
	printf("%d\n\n", soma);
	
	i = i + 1;
		
	}while(i <= 10);
	
	return 0;
}
