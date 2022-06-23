#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float x,y;
	printf("Esse programa lê um numero X e determina seu correspondente em Y!\n\n");
	
	printf("\n\nDigite o valor de X: ");
	scanf("%f", &x);
	y=((x*1)+4);

	printf ("\n\nO valor de y é %.1f!", y);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


