#include <stdio.h>
#include <locale.h>


//exibir os números 500 até o 1 (do while)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	i = 500;
	
	//faca i=i-1 enquanto o i for >= 0
do {
	
	printf("O valor do contador é de: %d\n", i);
	
	i = i - 1;
		
	} while (i >= 0);
	
return 0;
}
