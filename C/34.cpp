#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float media,soma,num,div1,div2;;
	int n,i;
	printf("Esse programa le n números inteiros e determina a media e a soma total,e ainda verifica se a soma total e a média são números pares ou ímpares!\n\n");
	printf("\n\nDigite a quantidade de numeros: ",i);
	scanf("%d",&n);
	
	soma=0;
	media=0;
	i=1;
	do{
		printf("\n\nDigite o numero %d: ",i);
		scanf("%f",&num);
		soma=soma+num;
		i++;
	}while(i<=n);
	media=soma/n;
	div1=soma/2;
	div2=media/2;
	if(div1*2==soma){
		printf("\n\nA soma %.2f é par!",soma);
	}else{
		printf("\n\nA soma %.2f é Ímpar!",soma);
	}
	if(div2*2==media){
		printf("\n\nA media %.0f é par!",media);
	}else{
		printf("\n\nA media %.0f é Ímpar!",media);
	}
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

