#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int idade = 523;
	printf("A idade do aluno � %d", idade);
	
	return 0;
}
