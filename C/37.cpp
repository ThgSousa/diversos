#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n,i;
	float op,sal;
	sal=0;
	op=0;
	printf("Esse programa determina o salvario de um vandedor com base na comissâo!\n\n");

	printf("\n\nSalario do vendedor: ");
	scanf("%f",&sal);
		
	printf("\n\nVendas realizadas no mês: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("\n\nValor da venda %d: ",i);
		scanf("%f",&op);	
		if(op<1000){
			sal=sal+50;
		}
		if((op>1000)and(op<=2000)){
			sal=sal+70;
		}
		if(op>2000){
			sal=sal+110;
		}
	}
	printf("\n\nO salario no final do mês será de R$%.2f",sal);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


