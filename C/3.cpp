#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int op;
	float tempo;
	
	printf("Esse programa determina a distancia entre um atirador e seu alvo!\n\n");
	
	printf("\n\nTempo em Segundos: ");
	scanf("%f",&tempo);
	
	printf("\n\nA distancia entre o atirador e seu alvo é de: %.0f metros\n\n",(tempo/340)/2);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

