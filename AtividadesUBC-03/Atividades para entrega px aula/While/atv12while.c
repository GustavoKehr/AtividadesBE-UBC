#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int apr, rep, exa, i = 1;
	
	float n1, n2, media;
	
	apr = 0;
	
	rep = 0;
	
	exa = 0;
	
	while (i <= 5) {
		
		printf("Digite a sua primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite sua segunda nota: ");
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

				i++; 
			}
		printf("Alunos aprovados: %d\n Alunos exames: %d\n Alunos reprovados: %d", apr, exa, rep);
return 0;
}
