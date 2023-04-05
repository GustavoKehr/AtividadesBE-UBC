#include <stdio.h>
#include <locale.h>


//exibir os valores numéricos de 5 a 200 (do while)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	i = 5;
	
	//faca i=i+1 enquanto o i for <= 200
do {
	
	printf("O valor do contador é de: %d\n", i);
	
	i = i + 1;
		
	} while (i <= 200);
	
return 0;
}
