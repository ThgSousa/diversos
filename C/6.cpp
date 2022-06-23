#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float a,b,imc;
	int op;
	imc=0;
	printf("Esse programa determina IMC com base na altura e peso!\n\n");
	
	printf("\n\nEscolha 1 para abrir o programa e 2 para sair: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			printf("\n\nAltura: ");
			scanf("%f",&a);
			printf("\n\nPeso: ");
			scanf("%f",&b);
			imc=b/(a*a);
			
			if(imc<16){
				printf("Magreza Grave!");
			}
			if(imc<=17 and imc>=16){
				printf("Magreza Moderada!");
			}
			if(imc<=18.5 and imc>=17){
				printf("Magreza Leve!");
			}		
			if(imc<=25 and imc>=18.5){
				printf("Saudavel!");
			}		
			if(imc<=30 and imc>=25){
				printf("Sobrepeso!");
			}		
			if(imc<=35 and imc>=30){
				printf("Obesidade Grau 1!");
			}
			if(imc<=40 and imc>=35){
				printf("Obesidade Grau 2(Severa)!");
			}		
			if(imc>40){
				printf("Obesidade Grau 3(Mórbida)!");
			}		
					
			break;
		default: 
			printf("\n\nObrigado por usar nosso sistema!\n\n");
		}
	
	
	system("pause");
	return 0;
}

