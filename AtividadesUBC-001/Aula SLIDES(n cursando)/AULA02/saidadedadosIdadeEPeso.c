#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int idade = 523;
	float peso = 64.12;
	printf("A idade do aluno é %d e ele possui %.2f quilos", idade, peso);
	
	return 0;
}
