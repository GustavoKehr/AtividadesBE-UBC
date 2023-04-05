#include <stdio.h>
#include <locale.h>


//exibir o valor do contador que irá variar seu valor de 1 a 25 (for)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	i = 1;
	
	//looping de true ate chegar no false
	for (i = 1; i <=25; i++ ) {
		printf("%d\n", i);
	}

return 0;
}


