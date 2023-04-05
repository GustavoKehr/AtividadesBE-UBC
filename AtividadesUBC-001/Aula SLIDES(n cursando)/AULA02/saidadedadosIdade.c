#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int idade = 523;
	printf("A idade do aluno é %d", idade);
	
	return 0;
}
