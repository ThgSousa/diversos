#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float vol;

	printf("Esse programa calcula o volume de agua dentro de um reservatorio!\n\n");
	
	printf("\n\nCapacidade total do reservatorio: ");
	scanf("%f",&vol);
	
	vol=(vol*60)/100;
	printf("\n\nO volume existente no reservatorio é de %.1f!",vol);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


