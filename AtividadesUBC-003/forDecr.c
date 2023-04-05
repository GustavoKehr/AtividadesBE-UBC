#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	for (i = 4; i >=1; i --) {
		printf("\n%d\n", i);
	}
	
	
	
	
return 0;
}
