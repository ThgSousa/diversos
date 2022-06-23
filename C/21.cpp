#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float soma,item,i,n;
	printf("Esse programa determina a soma entre N itens!\n\n");
	
	printf("\n\nQuantidade de itens: ");
	scanf("%f",&n);
	i=1;
	do{
		printf("\n\nPreço do item %.0f: ",i);
		scanf("%f",&item);
		soma=soma+item;
		i++;
	}while(i<=n);
	printf("\n\nA soma do(s) %.0f itens é de %.2f",n,soma);
 
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

