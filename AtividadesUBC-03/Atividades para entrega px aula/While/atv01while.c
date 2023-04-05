#include <stdio.h>
#include <locale.h>


//exibir o valor do contador que irá variar seu valor de 1 a 25 (while)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	i = 1;
	
	//enquanto i for <= 25 retorna + 1 na contagem
	while (i <= 25) {
		printf("%d\n", i);
		(i + i ++);
	}
return 0;
}
