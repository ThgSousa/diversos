#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float temp,desc;
	printf("Esse programa determina o valor da fatura do cliente com chamadas internacionais!\n\n");
	
	printf("\n\nDigite o tempo da ligação: ");
	scanf("%f",&temp);
	if(temp>=1666.66){
		desc=((temp*0.30)*5)/100;
		printf("O valor da fatura é de R$%.2f!",desc);
	}else{
		desc=(temp*0.30);
		printf("O valor da fatura é de R$%.2f!",desc);
	}
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


