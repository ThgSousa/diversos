#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	char a,b,c;
	printf("Esse programa determina se a palavra forma uma palíndrome ou não\n\n");
	
	printf("\n\nDigite a letra 1: ");
	scanf("%c",&a);
	printf("\n\nDigite a letra 2: ");
	scanf("%c",&b);
	printf("\n\nDigite a letra 3: ");
	scanf("%c",&c);
	
	if(a==c){
		printf("A palavra é uma palíndrome!");
	}else{
		printf("A palavra não é uma palíndrome!");
	}
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


