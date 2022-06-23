#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float x,y;
	
	printf("Esse programa calcula o tempo para que se perca a comunicação entre dois trens!\n\n");
	printf("Digite a velocidade do trem 1: em Km/h");
	scanf("%f", &x);
	printf("Digite a velocidade do trem 2 em Km/h:");
	scanf("%f", &y);	 	
	
	x=(15/(x-y));
	
	
	printf ("\n\nOs trens vão perder a comunicação em %f horas!", x);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

