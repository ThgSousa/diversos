#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float i,n,tt;
	printf("Esse programa determina o produtório dos números inteiros no intervalo de 1 até n!\n\n");
	
	printf("\n\nDigite ate onde deseja fazer o produtório: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		tt=tt*i;
	}

	printf ("\n\nO produtório é de %d!", tt);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


