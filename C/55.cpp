#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float cm;
	printf("Esse programa determina o volume de uma caixa que comporte, no mínimo, 10 bolas!\n\n");
	printf("\n\nDigite o tamanho das bolas(cm): ");
	scanf("%f",&cm);
	cm=cm*10;

	printf ("\n\nA caixa deve ter %.2f cm!",cm);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}
