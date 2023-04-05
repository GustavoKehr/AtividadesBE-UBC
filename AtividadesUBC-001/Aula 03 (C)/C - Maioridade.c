#include <stdio.h>
#include <>locale.h>

	int main() {
		
		setlocale(LC_ALL, "portuguese");
		
		int idade;
		
		printf("Digite sua idade: ");
		
		scanf("%d", &idade);
		
			if(idade >= 18) {
				printf("%d Maior de idade", idade);
			}
			else printf("%d Menor de idade", idade);
return 0;			
}
