#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float anos;
	printf("Esse programa calcula a distancia percorrida na velocidade da luz em X anos!\n\n");
	
	printf("\n\nDigite a quantidade de anos: ");
	scanf("%f", &anos);
	anos=anos*365;

	printf ("\n\nO valor de anos é %.0f!", anos);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


