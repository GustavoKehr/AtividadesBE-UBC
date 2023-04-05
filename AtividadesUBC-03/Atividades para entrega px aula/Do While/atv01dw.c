#include <stdio.h>
#include <locale.h>


//exibir o valor do contador que irá variar seu valor de 1 a 25 (do while)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	i = 1;
	
	//faca i=i+1 enquanto o i for <= 25
do {
	
	printf("O valor do contador é de: %d\n", i);
	
	i = i + 1;
		
	} while (i <= 25);
	
return 0;
}
