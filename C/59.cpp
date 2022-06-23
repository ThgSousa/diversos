#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n,i,result;

	printf("Esse programa calcula a quantidade de palavras que podem ser formadas com N letras diferentes\n\n");
	
	printf("\n\nDigite a quantidade de letras:  ");
	scanf("%d",&n);

	i=1;
	result=1;
	while(i<=n){
	    result=result*i;
	    i=i+1;
	}
	printf("Podem ser formadas %d palavras diferentes com %d letras!",result,n);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}
