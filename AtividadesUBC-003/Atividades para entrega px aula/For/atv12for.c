#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i = 1, apr = 0, rep = 0, exa = 0;
	
	float n1, n2, media;
	
	for(i = 1; i <= 5; i++) {
		
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		
		media = (n1 + n2) / 2;
		
			if(media >= 5) {
				apr += 1;
				
			} 
			else {
				
				if(media < 3) {
						rep += 1;
				}
				else {
					exa += 1;
			}
		}		
	}	
	printf("Alunos aprovados: %d\n Alunos exames: %d\n Alunos reprovados: %d", apr, exa, rep);
return 0;
}
