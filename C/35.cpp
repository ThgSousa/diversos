#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n,i,maiorNum,menorNum,maior,temp;
	float media;
	menorNum=999;
	maiorNum=0;
	printf("Esse programa  le N números e determine o maior número e o menor número. Determine quantos números são superiores ao valor da média!\n\n");
	
	printf("\n\nA Quantidade de numeros: : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\n\nValor do numero %d: ",i);
		scanf("%d",&temp);
		if(temp<menorNum){
			menorNum=temp;
		}
		if(temp>maiorNum){
			maiorNum=temp;
		}
		media=media+temp;
		if(temp>media){
		maior++;
	}		
	}
	media = media/n;

	printf("\n\n\t\tRESULTADOS");
	printf("\n\n\tA media dos %d numeros é de %.1f: ",n,media);
	printf("\n\n\tO Maior Numero digitado foi de %d! ",maiorNum);
	printf("\n\n\tO Menor Numero digitado foi %d! ",menorNum);
	printf("\n\n\tExiste(m) %d numero(s) superior(es) a media! ",maior);

	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


