#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float h;
	int n,i;
	h=0;
	printf("Esse programa determina o n�mero H!\n\n");
	printf("\n\nDigite a quantidade de termos para impress�o: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		h= h+(1/(i*i));
	}
	printf("\n\nO valor de H � de %.2f!",h);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

