#include <stdio.h>
#include <locale.h>

	int main() {

		setlocale(LC_ALL, "portuguese");

		
		char sexo;
		
		printf("Digite o seu sexo (Masculino ou Feminino): ");
		
		scanf("%c", &sexo);
		if (sexo == 'F') {
			printf("Sexo Feminino");
		}
		else printf("Sexo diferente de feminino");
		
return 0;	
}
