#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float l1,l2,l3,l4;

	printf("Esse programa determina se os valores digitados formam um triangulo ou um quadrado!\n\n");
	
	printf("\n\nDigite o primeiro lado: ");
	scanf("%f", &l1);
	printf("\n\nDigite o segundo lado: ");
	scanf("%f", &l2);
	printf("\n\nDigite o terceiro lado: ");
	scanf("%f", &l3);
	printf("\n\nDigite o quarto lado: ");
	scanf("%f", &l4);
	if((l1==l2)and(l2==l3)and(l3==l4)){
		printf ("\n\nOs valores formam um quadrado!");
	}else{
		printf ("\n\n… um retangulo");
	}
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


