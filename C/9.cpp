#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int cpf1,cpf2,dat1,dat2,pass1,pass2;
	cpf1 = 12345678911;
	dat1 = 27022001;
	pass1 = 1234;
	printf("Esse programa compara um cpf, data de nascimento e senha digitados pelo usuários com os salvos no sistema e determina se são validos!");
	printf("\n\nDigite o seu CPF: (Somente números!)");
	scanf("%d",&cpf2);
	printf("\n\nDigite sua data de nascimento: (Somente números!)");
	scanf("%d",&dat2);
	printf("\n\nDigite sua senha: (Somente números!)");
	scanf("%d",&pass2);
	
	if((cpf1==cpf2)and(dat1==dat2)and(pass1==pass2)){
		printf("\n\nBem Vindo, Credenciais Válidas!");
	}else{
		printf("\n\nVocê digitou algo errado!");
	}
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

