#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float i,razao,soma,pm,n;

	printf("Esse programa l� a raz�o e o primeiro termo de uma P.G e mostra os N termos seguintes!\n\n");
	printf("Digite o primeiro termo: ");
	scanf("%f", &pm);
	printf("Digite a raz�o: ");
	scanf("%f", &razao);
	printf("Digite a quantidade de termos: ");
	scanf("%f", &n);
	for(i=1;i<=100;i++){
		pm=pm*razao;
		soma=soma+pm;
		printf("%.0f,",pm);
	}
	printf ("\n\nA soma da p.a � %.1f!", soma);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


