#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float total,temp,base,alt,area,i,n;
	int tipo;
	
	printf("Esse programa calcula o volume de N tanques e deternina o volume total!\n\n");
	printf("Digite a quantidade de tanques: ");
	scanf("%f", &n);
	for(i=1;i<=n;i++){
		printf("\n\nFormato do tanque %.0f:\n\n1-Cubo\n\n2-Cilindro\n\n3-Cone\n\n4-Paralelepipedo\n\nEscolha um tipo de tanque: ",i);
		scanf("%d",&tipo);
		switch(tipo){
			case 1:
				printf("\n\nDigite a aresta do cubo: ");
				scanf("%f",&area);
				temp=(area*area)*area;
				total=total+temp;
				printf("\n\nO volume do seu cubo é: %.1f",temp);
				break;
			case 2:
				printf("\n\nDigite a aresta do cilindro: ");
				scanf("%f",&area);
				printf("\n\nDigite a altura do cilindro: ");
				scanf("%f",&alt);
				temp=(area*alt);
				total=total+temp;
				printf("\n\nO volume do seu cilindro é: %.1f",temp);
				break;
			case 3:
				printf("\n\nDigite a aresta do cone: ");
				scanf("%f",&area);
				printf("\n\nDigite a altura do cone: ");
				scanf("%f",&alt);
				temp=(area*alt);
				total=total+temp;
				printf("\n\nO volume do seu cone é: %.1f",temp);
				break;
			case 4:
				printf("\n\nDigite o comprimento do Paralelepipedo: ");
				scanf("%f",&area);
				printf("\n\nDigite a altura do Paralelepipedo: ");
				scanf("%f",&alt);
				printf("\n\nDigite a largura do Paralelepipedo: ");
				scanf("%f",&base);
				temp=(base*alt)*area;
				total=total+temp;
				printf("\n\nO volume do seu cubo é: %.1f",temp);
				break;
			default:
				printf("\n\nDigite um valor valido!");

		}
	}
	
	printf ("\n\nO volume total dos tanques é de %f!", total);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

