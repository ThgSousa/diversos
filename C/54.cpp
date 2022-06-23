#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float x,y;
	printf("Esse programa le X e Y e determina o quadrante!\n\n");
	printf("\n\nDigite o valor de X: ");
	scanf("%f",&x);
	printf("\n\nDigite o valor de Y: ");
	scanf("%f",&y);
	if((x>0)and(y>0)){
		printf("\n\n1° quadrante!\n\n");
	}else if((x<0)and(y>0)){
		printf("\n\n2° quadrante!\n\n");
	}else if((x<0)and(y<0)){
		printf("\n\n3° quadrante!\n\n");
	}else if((x>0)and(y<0)){
		printf("\n\n4° quadrante!\n\n");
	}else{
		printf("\n\nEsses valores nao correspondem a nenhum quadrante!\n\n");
	}
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


