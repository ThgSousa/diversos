#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n,i,H;

	printf("Esse programa gera o número H!\n\n");
	
	printf("\n\nDigite o termo: : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("1/%d,",i);		
	}

	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


