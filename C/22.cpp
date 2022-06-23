#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float area,altura,base,quad;
	printf("Esse programa determina a area de um quadrado e a area dos quadrados internos!\n\n");
	
	printf("\n\nAltura do quadrado: ");
	scanf("%f",&altura);

	printf("\n\nBase do quadrado: ");
	scanf("%f",&base);
	area=altura*base;
	quad=area/4;
		
	printf("\n\nA area do quadrado é de %.2f",area);
 	printf("\n\nA area interna de 4 quadrados internos é de %.2f",quad);
 	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

