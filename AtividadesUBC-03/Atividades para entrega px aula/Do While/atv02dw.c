#include <stdio.h>
#include <locale.h>


//exibir os n�meros de 1 a 1000 (do while)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	i = 1;
	
	//faca i=i+1 enquanto o i for <= 1000
do {
	
	printf("%d\n", i);
	
	i = i + 1;
		
	} while (i <= 1000);
	
return 0;
}
