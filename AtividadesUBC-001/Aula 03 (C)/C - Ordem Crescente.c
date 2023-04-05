#include <stdio.h>
#include <locale.h>

	int main () {
	
		setlocale(LC_ALL, "portuguese");

		int a, b; 
		
		printf("Digite dois números: ");
		
		scanf("%d", &a);
		
		scanf ("%d", &b);
		
			if (a > b) {
				printf("%d %d", b, a);
			}
			else printf("%d %d", a, b);
return 0;
}
