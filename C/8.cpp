#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float l1,l2,area;
	area=0;
	printf("Esse programa determina a area de um triangulo qualquer");
	
	printf("\n\nDigite o lado 1: ");
	scanf("%f",&l1);
	printf("\n\nDigite o lado 2: ");
	scanf("%f",&l2);
	
	area = (l1*l2)/2;
	printf("\n\nA area é de %.1f!\n\n",area);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

