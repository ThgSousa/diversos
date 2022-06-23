#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float a,lados;
	printf("Esse programa calcula area de um terreno com lados iguais!\n\n");
	printf("\n\nDigite um dos lados do terreno: ");
	scanf("%f",&lados);
	
	a=lados*lados;
	printf ("\n\nO terrendo tem area de %.1f metros!", a);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


