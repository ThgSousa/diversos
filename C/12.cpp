#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i,n,termo,maior,menor;
	maior=0;
	menor=999;
	printf("Esse programa recebe N números inteiros e determina o maior e menor!");
	printf("\n\nQuantidade de termos: ");
	scanf("%d",&n);
	i=1;
	do{
	printf("\n\nDigite o termo %d: ",i);
	scanf("%d",&termo);
	if(termo>maior){
		maior=termo;
	}
	if(termo<menor){
		menor=termo;
	}
	i++;
	}while(i<=n);
	
	printf("\n\nO menor termo digitado foi %d e o maior foi o %d!",menor,maior);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

