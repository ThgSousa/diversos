#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	float salario;
	
	printf("Esse programa determina o salario com base no reajuste e no FGTS!");
	
	printf("\n\nSalario bruto: ");
	scanf("%f",&salario);
	
	if(salario<=2000){
		System.out.printf("Seu Salario liquido é de R$%.2f!",((salario*15)/100)+salario);	
	}
	if(salario>2000 && salario<3000){
		System.out.printf("Seu Salario liquido é de R$%.2f!",((salario*10)/100)+salario);	
	}
	if(salario>3000){
		System.out.printf("Seu Salario liquido é de R$%.2f!",((salario*8)/100)+salario);	
	}        

	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

