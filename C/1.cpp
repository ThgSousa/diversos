#include <stdio.h>
#include <stdlib.h>


int main(void){
	float x,y;
	x=0;
	printf("Esse programa converte x segundos em horas");
	printf("\n\nDigite os segundos: ");
	scanf("%f",&x);
	y = (x/60)/60;
	printf("\n\n%.2f segundos equivalem a %.2f hora(s)\n\n",x,y);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
    system("pause");
	return 0;
}

