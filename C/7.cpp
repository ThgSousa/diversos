#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float nota,soma;
	
	printf("Esse programa noma as 4 notas de um aluno e calcula a media");
	i=1;
	soma=0;
	while(i<=4){
		printf("\n\nDigite a nota %d: ",i);
		scanf("%f",&nota);
		soma = soma +nota;
		i++;
	}
	soma = soma/4;
	
	printf("\n\nA media do aluno foi de %.1f!\n\n",soma);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

