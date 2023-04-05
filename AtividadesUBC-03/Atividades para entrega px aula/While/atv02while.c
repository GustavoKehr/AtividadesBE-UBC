#include <stdio.h>
#include <locale.h>


//exibir os números de 1 a 1000 (while)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	i = 1;
	
	//enquanto i for <= a 1000 retorna + 1 na contagemm
	while (i <= 1000) {
		printf("%d\n", i);
		(i + i ++);
	}
return 0;
}
