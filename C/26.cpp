#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float velCarro,velCaminhao,esp,temp;
	velCarro=10;
	velCaminhao=20;
	
	printf("Esse programa calcula o espa�o entre um carro e um caminh�o!\n\n");

	velCaminhao=velCaminhao*2;
	temp=velCaminhao/velCarro;
	esp=velCaminhao*temp;
	 	
	printf ("\n\nO carro demorou %.0f segundos para chegar ao caminh�o!", temp);
	printf ("\n\nO carro precidou de %.0f km para chegar ao caminh�o!", esp);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

