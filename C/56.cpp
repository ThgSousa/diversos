#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float areaLamp,areaCaixa,result;
	printf("Esse programa determina o volume total de espuma de proteção para enviar 100 luminárias!\n\n");
	printf("\n\nDigite a area da lampada: ");
	scanf("%f",&areaLamp);
	printf("\n\nDigite a area da caixa: ");
	scanf("%f",&areaCaixa);	
	result=(areaLamp-areaCaixa)*100;
	printf ("\n\nA quantidade de espuma para enviar 100 lampadas é de %.1f!", result);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


