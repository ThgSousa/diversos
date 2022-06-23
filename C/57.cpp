#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float x,y,w,z,result;
	printf("Esse programa determina a distância entre os pontos(x e y) e (w e z)!\n\n");
	
	printf("\n\nDigite as coordenadas do eixo x: ");
	scanf("%f",&x);
	printf("\n\nDigite as coordenadas do eixo y: ");
	scanf("%f",&y);
	printf("\n\nDigite as coordenadas do eixo w: ");
	scanf("%f",&w);
	printf("\n\nDigite as coordenadas do eixo z: ");
	scanf("%f",&z);
	result=((w-x)*(w-x)-((z-y)*(z-y)));
	printf ("\n\nA distancia entre os dois pontos é de %.1f!", result);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


