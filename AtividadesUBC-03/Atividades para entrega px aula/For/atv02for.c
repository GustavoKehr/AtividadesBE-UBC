#include <stdio.h>
#include <locale.h>


//exibir os números de 1 a 1000 (for)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	i = 1;
	
	//looping de true ate chegar no false
	for (i = 1; i <=1000; i++ ) {
		printf("%d\n", i);
	}

return 0;
}


