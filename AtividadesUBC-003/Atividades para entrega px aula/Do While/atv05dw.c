#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	
	i = 2;
	
	do {
		
		printf("Os n�meros pares s�o: %d\n", i);
		
		i = i +2;
		
	} while (i <= 20);
	
	return 0;
}
