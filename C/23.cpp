#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float x,y,i,resultado;
	printf("Esse programa realiza potenciações!\n\n");
	printf ("\n\nDigite o valor da base: ");
	scanf ("%f", &x);
	printf ("\n\nDigite o valor do expoente: ");
	scanf ("%f", &y);
	i=1;
	resultado=1;
		while(i<=y){
			resultado = x*resultado;
			i++;
		}
	printf ("\n\n%.0f com expoente %.0f = %.0f", x, y, resultado);
	 	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

