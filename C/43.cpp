#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float comp;
	int op;

	printf("Esse programa determina a altura de um predio usando o angulo de sua sombra!\n\n");
	printf("\n\nMenu\n1- 30°\n2- 45°\n3- 60°");
	printf("\n\nEscolha o angulo da sombra: ");
	scanf("%d", &op);

	switch(op){
		case 1:
			printf("Digite o comprimento da sombra: ");
			scanf("%f", &comp);
			comp=comp*0.57;
			break;
		case 2:
			printf("Digite o comprimento da sombra: ");
			scanf("%f", &comp);
			comp=comp*1;
			break;
		case 3:
			printf("Digite o comprimento da sombra: ");
			scanf("%f", &comp);
			comp=comp*1.73;
			break;
		default:
			printf("Opção invalida!");
	}

	printf ("\n\nA altura do predio é %.1f!", comp);
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


