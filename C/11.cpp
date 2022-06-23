#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	float i,n,termo,soma;
	
	printf("Esse programa recebe N números e determina a media!");
	printf("\n\nQuantidade de termos: ");
	scanf("%f",&n);
	i=1;
	do{
	printf("\n\nDigite o termo %.0f: ",i);
	scanf("%f",&termo);
	soma=soma+termo;
	i++;
	}while(i<=n);
	
	printf("\n\nA media dos %0.f termos é de %.0f",n,soma/n);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

