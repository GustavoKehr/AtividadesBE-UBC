#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int v1, v2, v3, v4, m;
	
	v1 = 45000;
	
	v2 = 48000;
	
	v3 = 55000;
	
	v4 = 41000;
	
	m = (v1 + v2 + v3 + v4)/4;
	
	printf("A m�dia das cota��es nas quatro concession�rias diferentes � %d", m);
	
}
