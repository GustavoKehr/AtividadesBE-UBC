#include <stdio.h>
#include <locale.h>


//exibir os valores numéricos de 5 a 200 (for)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	
	//looping de true ate chegar no false
	for (i = 5; i <=200; i++ ) {
		printf("%d\n", i);
	}

return 0;
}


