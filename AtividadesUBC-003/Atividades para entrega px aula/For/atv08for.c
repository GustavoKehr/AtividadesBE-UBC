#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, soma;
	
	i = 1;
	
	soma = 0;
	
	for(i = 1; i <= 10; i++) {
		
	soma = soma + i;
	
	printf("%d\n\n", soma);
		
	}
return 0;
}
