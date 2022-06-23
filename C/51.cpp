#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int d;
	printf("Esse programa calcula a distancia da estrela veja em relação a terra!\n\n");
	
	d = 26*26.461.000.000.000;

	printf ("\n\nA estrela veja esta a %.0f!", d);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


