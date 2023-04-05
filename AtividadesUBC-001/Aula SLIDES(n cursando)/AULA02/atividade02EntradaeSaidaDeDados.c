#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	char mensagem[50];
	
	printf("Entre com uma mensagem aqui: ");
	gets(mensagem);
	
	printf("A mensagem que digitou é: %s", mensagem);
	
	return 0;
}
