#include <stdio.h>
#include <locale.h>


//exibir os valores numéricos de 5 a 200 (while)
int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	//variavel i
	int i;
	//inserindo valor na variavel
	i = 5;
	
	//enquanto i for <= a 200 retorna + 1 na contagemm
	while (i <= 200) {
		printf("%d\n", i);
		(i + i ++);
	}
return 0;
}
