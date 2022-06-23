#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i,n,op,soma,temp;

	printf("Esse programa calcula o volume total de n reservatorios com base em seu formato!\n\n");
	
	printf("\n\nQuantidade de reservatorios: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("\n\n Menu\n1-Paralelepipedo\n2-Cubo\n3-Cilindro");
		printf("\n\nFormato do Reservatorio %d: ",i);
		scanf("%d",&op);
		
		switch(op){
			case 1:
				printf("\nVolume do Paralelepipedo: ");
				scanf("%d",&temp);	
				soma=soma+temp;
				break;
			case 2:
				printf("\nVolume do Cubo: ");
				scanf("%d",&temp);	
				soma=soma+temp;
				break;
			case 3:
				printf("\nVolume do Cilindro: ");
				scanf("%d",&temp);	
				soma=soma+temp;
				break;
			default:
				printf("Opção invalida!");
		}
				
	}
	printf("\n\nA O volume total do(s) %d reservatorio(s) é de %d!",n,soma);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


