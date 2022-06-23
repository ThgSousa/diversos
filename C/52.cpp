#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float comp,temp,tamanho,v;
	tamanho=0;
	printf("Esse programa calcula a extensão da ponte, em metros!\n\n");
	printf("\n\nComprimento do trem: ");
	scanf("%f",&comp);
	printf("\n\nTempo de travessia na ponte: ");
	scanf("%f",&temp);	
	v=80/3.6;
	tamanho=(v*temp-comp);
	printf ("\n\nA ponte tem %.1f metros!", tamanho);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


