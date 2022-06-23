#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int op;
	float real,convertido;
	
	printf("Esse programa converte reais em uma determinada moeda");
	printf("\n\n1-Dolar \n\n2-Libra \n\n3-Iene \n\n4-Euro\n\n Escolha a moeda: ");
	scanf("%d",&op);
	
	printf("\n\nQuantos Reais deseja converter: ");
	scanf("%f",&real);
	switch(op){
		case 1:
			convertido = real/3.90;
			printf("%.2f Reais convertidos em Dolares é %.2f Dolares\n\n",real,convertido);
			break;
		case 2:
			convertido = real/5.10;
			printf("%.2f Reais convertidos em Libras é %.2f Libras\n\n",real,convertido);
			break;
		case 3:
			convertido = real/0.035;
			printf("%.2f Reais convertidos em Ienes é %.2f Ienes\n\n",real,convertido);
			break;
		case 4:
			convertido = real/4.40;
			printf("%.2f Reais convertidos em Euros é %.2f Euros\n\n",real,convertido);
			break;	
		default:
		printf("Opção Ínvalida");	
	}
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

