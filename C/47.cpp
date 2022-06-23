#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i,n,temp,maiorId,menorId,mediaId;
	float maiorPeso,menorPeso,mediaPeso,maiorAlt,menorAlt,mediaAlt;
	maiorId=0;
	menorId=999;
	maiorPeso=0;
	menorPeso=999;
	maiorAlt=0;
	menorAlt=999;
	printf("Esse programa lê a idade, o peso e a altura de n pessoas, determina a media, o maio e o menor de cada um!\n\n");
	
	printf("\n\nQuantidade de pessoas: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		temp=0;
		printf("\n\nIdade da pessoa %d: ",i);
		scanf("%d", &temp);	
		if(temp<menorId){
			menorId=temp;
		}
		if(temp>maiorId){
			maiorId=temp;
		}
		mediaId=mediaId+temp;
		
		temp=0;
		printf("\n\nPeso da pessoa %d: ",i);
		scanf("%f", &temp);	
		if(temp<menorPeso){
			menorPeso=temp;
		}
		if(temp>maiorPeso){
			maiorPeso=temp;
		}
		mediaPeso=mediaPeso+temp;
		
		temp=0;
		printf("\n\nAltura da pessoa %d: ",i);
		scanf("%f", &temp);	
		if(temp<menorAlt){
			menorAlt=temp;
		}
		if(temp>maiorAlt){
			maiorAlt=temp;
		}
		mediaAlt=mediaAlt+temp;
	}
	mediaId=mediaId/n;
	mediaPeso=mediaPeso/n;
	mediaAlt=mediaAlt/n;
	printf("\nA menor altura entre %d pessoa(s) é de %.1f",n,menorAlt);
	printf("\nA maior altura entre %d pessoa(s) é de %.1f",n,maiorAlt);
	printf("\n\nAltura media de de %d pessoa(s) é de %.1f",n,mediaAlt);

	printf("\nO menor peso entre %d pessoa(s) é de %.1f",n,menorPeso);
	printf("\nO maior peso entre %d pessoa(s) é de %.1f",n,maiorPeso);
	printf("\n\nA media de peso de %d pessoa(s) é de %.1f",n,mediaPeso);
	
	printf("\nA menor idade entre %d pessoa(s) é de %.1f",n,menorId);
	printf("\nA maior idade entre %d pessoa(s) é de %.1f",n,maiorId);
	printf("\n\nA media de idade de %d pessoa(s) é de %.1f",n,mediaId);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


